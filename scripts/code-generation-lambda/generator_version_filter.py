# Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License").
# You may not use this file except in compliance with the License.
# A copy of the License is located at
#
#  http://aws.amazon.com/apache2.0
#
# or in the "license" file accompanying this file. This file is distributed
# on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
# express or implied. See the License for the specific language governing
# permissions and limitations under the License.
#
import json
import boto3
from boto3.dynamodb.conditions import Key
import traceback
import os

class ParameterError(Exception):
    pass

class DynamodbTableError(Exception):
    pass

class LambdaInvokeError(Exception):
    pass

class VersionError(Exception):
    pass

print('Loading function')

dynamodbClient = boto3.resource('dynamodb')
lambdaClient = boto3.client('lambda')

# The DynamoDB table we used looks like:
''' Table: CodeGenerationLambdaMetadata
| Version  | Availability | FunctionName | PointingTo |
-------------------------------------------------------
| 1.0      | true         | Lambda-1_0   |            |
| 1.1      | true         | Lambda-1_1   |            |
| latest   |              |              | 1.1        |

In this table, the primary key (partition key here) is "Version",
and each item(row) is a collection of several attribtues:
    | Availability | FunctionName | PointingTo |
For more details about the definitions of primary key and attributes in DynamoDB table:
http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/HowItWorks.CoreComponents.html#HowItWorks.CoreComponents
'''

# Environment variables: constants defined in the DynamoDB table.
# LAMBDA_TABLE is the name of the DynamoDB table we use.
LAMBDA_TABLE = os.environ['DYNAMODB_LAMBDA_FUNCTION_METADATA_TABLE']
# PRIMARY_KEY is the name of primary(partition) key used in this table, which is "Version" here.
PRIMARY_KEY = os.environ['DYNAMODB_PRIMARY_KEY']
# ATTRIBUTE_* is the name of attribtues used in this table.
ATTRIBUTE_AVAILABILITY = os.environ['DYNAMODB_ATTRIBUTE_AVAILABILITY']
ATTRIBUTE_FUNCTIONNAME = os.environ['DYNAMODB_ATTRIBUTE_FUNCTIONNAME']
ATTRIBUTE_POINTINGTO = os.environ['DYNAMODB_ATTRIBUTE_POINTINGTO']
# CONSTANT_* is the name of constants used in this table.
CONSTANT_LATEST = os.environ['DYNAMODB_CONSTANT_LATEST']

# Constants defined in the Lambda output.
KEY_SUCCESSFUL = 'successful'
KEY_ERRORMESSAGE = 'errorMessage'

def lambda_handler(event, context):
    # Log the received event
    print('Received event: {}'.format(json.dumps(event, indent = 2)))

    try:
        # Get version from input, if it's not provided, use the latest one by default.
        version = getVersion(event)

        # Get the latest version.
        if version == CONSTANT_LATEST:
            dynamodbResponse = dynamodbClient.Table(LAMBDA_TABLE).get_item(
                Key = { PRIMARY_KEY: CONSTANT_LATEST })
            version = getLatestVersion(dynamodbResponse)

        # Get function name of the Lambda to be invoked.
        dynamodbResponse = dynamodbClient.Table(LAMBDA_TABLE).get_item(
            Key = { PRIMARY_KEY: version })
        functionName = getFunctionName(dynamodbResponse, version)

        # Get function alias (such as Alpha, Beta, Gamma, Prod) of the Lambda.
        alias = getAlias(context.invoked_function_arn)

        # Invoke the Lambda
        lambdaInvokeResponse = lambdaClient.invoke(
            FunctionName = functionName,
            InvocationType = 'RequestResponse',
            Payload = json.dumps(event),
            Qualifier = '$LATEST' if alias == None else alias)

        # Generate output
        lambdaOutput = getLambdaOutput(lambdaInvokeResponse)

        return lambdaOutput

    except Exception as e:
        errorMessage = '{} exception encountered. Message: {}'.format(e.__class__.__name__, str(e))
        print(errorMessage)
        traceback.print_exc()
        return {
            KEY_SUCCESSFUL: False,
            KEY_ERRORMESSAGE: errorMessage
        }

def getVersion(event):
    ''' Extract version from input parameters, return CONSTANT_LATEST by default if not provided.
    '''
    if 'sdkParameters' not in event:
        raise ParameterError(missingRequiredParameterMessage('sdkParameters'))

    if 'cpp.sdk-core-version' not in event['sdkParameters']:
        return CONSTANT_LATEST

    version = event['sdkParameters']['cpp.sdk-core-version']
    if  version == '' or version == CONSTANT_LATEST:
        return CONSTANT_LATEST

    return parseVersion(version)

def getLatestVersion(dynamodbResponse):
    ''' Get the version "latest" points to.
    '''
    item = validateDynamodbResponse(dynamodbResponse, CONSTANT_LATEST, [ATTRIBUTE_POINTINGTO])
    return item[ATTRIBUTE_POINTINGTO]

def validateDynamodbResponse(dynamodbResponse, version, attributeNameList):
    ''' Validate the DynamoDB response.
    1. HTTP status code should be 200.
    2. One and only one item is expected to be found.
    3. The item should have the all of the attributes we specified in the attributeNameList.
    '''
    if dynamodbResponse['ResponseMetadata']['HTTPStatusCode'] != 200:
        raise DynamodbTableError('Bad response from DynamoDB.')

    if 'Item' not in dynamodbResponse:
        raise VersionError('Version: \'{}\' is not defined. You can use any version available for AWS SDK for C++,'
                           ' or leave it empty to use the latest one by default.'.format(version))

    item = dynamodbResponse['Item']
    for attributeName in attributeNameList:
        if attributeName not in item:
            raise DynamodbTableError(missingRequiredAttributeMessage(attributeName))
    
    return item

def parseVersion(version):
    '''Expected format of version is <major-version>.<minor-version>
    But if the format is <major-version>.<minor-version>.<patch-version>,
    we can still convert it to the expected one.
    '''
    versionComponents = version.split('.')
    if len(versionComponents) == 2:
        return version
    if len(versionComponents) == 3:
        return '{}.{}'.format(versionComponents[0], versionComponents[1])
    raise VersionError('Unexpected format of version: \'{}\', expecting \'<major-version>.<minor-version>\'.'.format(version))

def getFunctionName(dynamodbResponse, version):
    '''Get function name of the Lambda function.
    '''
    item = validateDynamodbResponse(dynamodbResponse, version, [ATTRIBUTE_FUNCTIONNAME, ATTRIBUTE_AVAILABILITY])

    if item[ATTRIBUTE_AVAILABILITY] == False:
        raise VersionError('We are still preparing for the code generation to make it compatible with SDK core of version: {},'
                           'please try again later.'.format(version))
    
    return item[ATTRIBUTE_FUNCTIONNAME]

def getAlias(functionArn):
    '''Extract the alias of the function in the ARN.
    ARN looks like: arn:aws:lambda:<region>:<id>:function:<function-name>:<qualifier>
                or: arn:aws:lambda:<region>:<id>:function:<function-name> for unqualified function.
    <qualifier> can be either Version(Integer) or Alias(String), we can figure out which one it is by checking if it is a digit.
    '''
    arnParts = functionArn.split(':')
    assert len(arnParts) == 7 or len(arnParts) == 8, 'Unexpected function ARN: {}'.format(functionArn)

    if len(arnParts) == 7:
        return None
    if len(arnParts) == 8:
        qualifier = arnParts[-1]
        return None if qualifier.isdigit() else qualifier

def getLambdaOutput(invokeResponse):
    ''' Bypass the output from SDK Generator Lambda.
    '''
    if 'Payload' not in invokeResponse or invokeResponse['ResponseMetadata']['HTTPStatusCode'] != 200:
        raise LambdaInvokeError('Bad response from Lambda invoke.')
    sdkGeneratorOutput = json.loads(invokeResponse['Payload'].read())

    if KEY_SUCCESSFUL not in sdkGeneratorOutput:
        raise LambdaInvokeError('\'{}\' not found in the SDK Generator Lambda output.'.format(KEY_SUCCESSFUL))

    if (not sdkGeneratorOutput[KEY_SUCCESSFUL]) and (KEY_ERRORMESSAGE not in sdkGeneratorOutput):
        raise LambdaInvokeError('\'{}\' not found in the SDK Generator Lambda output.'.format(KEY_ERRORMESSAGE))

    return sdkGeneratorOutput

def missingRequiredParameterMessage(parameterName):
    return 'Missing required parameter: \'{}\'.'.format(parameterName)

def missingRequiredAttributeMessage(attributeName):
    return 'Missing attribute: \'{}\' in DynamoDB table: {}.'.format(attributeName, LAMBDA_TABLE)
