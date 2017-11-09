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
import os
os.environ['DYNAMODB_LAMBDA_FUNCTION_METADATA_TABLE'] = 'CodeGenerationLambdaMetadata'
os.environ['DYNAMODB_PRIMARY_KEY'] = 'Version'
os.environ['DYNAMODB_ATTRIBUTE_AVAILABILITY'] = 'Availability'
os.environ['DYNAMODB_ATTRIBUTE_FUNCTIONNAME'] = 'FunctionName'
os.environ['DYNAMODB_ATTRIBUTE_POINTINGTO'] = 'PointingTo'
os.environ['DYNAMODB_CONSTANT_LATEST'] = 'latest'
import io
import unittest
import generator_version_filter as vf

class TestVersionFilter(unittest.TestCase):
    def setUp(self):
        self.defaultEvent = {
            'sdkParameters': {
                'service.name': 'service-name',
                'cpp.namespace': 'cpp-namespace',
                'cpp.sdk-core-version': '1.1'},
            'presignedUrl': 'pre-signed-URL',
            'model': 'model'}
        self.defaultDynamodbResponse = {
            'Item': { vf.PRIMARY_KEY: '1.1', vf.ATTRIBUTE_AVAILABILITY: True, vf.ATTRIBUTE_FUNCTIONNAME: 'FunctionName-1_1' },
            'ResponseMetadata': {'RetryAttempts': 0,
                                 'HTTPStatusCode': 200,
                                 'RequestId': 'requestId',
                                 'HTTPHeaders': {'HeaderKey': 'HeaderValue'}}}
        self.defaultLambdaInvokeResponse = {'ResponseMetadata': {'RequestId': 'requestId',
                                                                 'HTTPStatusCode': 200,
                                                                 'HTTPHeaders': {'HeaderKey': 'HeaderValue'},
                                                                 'RetryAttempts': 0},
                                            'StatusCode': 200, 
                                            'Payload': io.BufferedReader(io.BytesIO(b'{"successful": true}'))}
        self.defaultFunctionArn = 'arn:aws:lambda:<region>:<id>:function:<function-name>'

    def test_event_missing_sdkParameters(self):
        event = dict(self.defaultEvent)
        event.pop('sdkParameters')
        with self.assertRaises(vf.ParameterError):
            version = vf.getVersion(event)

    def test_get_version_by_default(self):
        event = dict(self.defaultEvent)

        event['sdkParameters']['cpp.sdk-core-version'] = vf.CONSTANT_LATEST
        version = vf.getVersion(event)
        self.assertEqual(version, vf.CONSTANT_LATEST)

        event['sdkParameters']['cpp.sdk-core-version'] = ''
        version = vf.getVersion(event)
        self.assertEqual(version, vf.CONSTANT_LATEST)

        event['sdkParameters'].pop('cpp.sdk-core-version')
        version = vf.getVersion(event)
        self.assertEqual(version, vf.CONSTANT_LATEST)

    def test_parse_version(self):
        event = dict(self.defaultEvent)
        event['sdkParameters']['cpp.sdk-core-version'] = '1.1.20'
        version = vf.getVersion(event)
        self.assertEqual(version, '1.1')

    def test_get_version(self):
        event = dict(self.defaultEvent)
        version = vf.getVersion(event)
        self.assertEqual(version, '1.1')

    def test_dynamodb_bad_response(self):
        dynamodbResponse = dict(self.defaultDynamodbResponse)
        dynamodbResponse['ResponseMetadata']['HTTPStatusCode'] = 400
        with self.assertRaises(vf.DynamodbTableError):
            item = vf.validateDynamodbResponse(dynamodbResponse, version = '1.1', attributeNameList = [vf.ATTRIBUTE_FUNCTIONNAME])

    def test_dynamodb_empty_table(self):
        dynamodbResponse = dict(self.defaultDynamodbResponse)
        dynamodbResponse.pop('Item')
        with self.assertRaises(vf.VersionError):
            item = vf.validateDynamodbResponse(dynamodbResponse, version = '1.1', attributeNameList = [vf.ATTRIBUTE_FUNCTIONNAME])

    def test_dynamodb_invalid_attribute(self):
        dynamodbResponse = dict(self.defaultDynamodbResponse)
        dynamodbResponse['Item'] = { vf.PRIMARY_KEY: '1.1', vf.ATTRIBUTE_AVAILABILITY: True, 'LambdaFunctionName': 'FunctionName-1_1' }
        with self.assertRaises(vf.DynamodbTableError):
            item = vf.validateDynamodbResponse(dynamodbResponse, version = '1.1', attributeNameList = [vf.ATTRIBUTE_FUNCTIONNAME])

    def test_get_latest_version(self):
        dynamodbResponse = dict(self.defaultDynamodbResponse)
        dynamodbResponse['Item'] = { vf.PRIMARY_KEY: 'latest', vf.ATTRIBUTE_POINTINGTO: '1.1' }
        version = vf.getLatestVersion(dynamodbResponse)
        self.assertEqual(version, '1.1')
    
    def test_function_not_available(self):
        dynamodbResponse = dict(self.defaultDynamodbResponse)
        dynamodbResponse['Item'][vf.ATTRIBUTE_AVAILABILITY] = False
        with self.assertRaises(vf.VersionError):
            functionName = vf.getFunctionName(dynamodbResponse, '1.1')

    def test_get_function_name(self):
        functionName = vf.getFunctionName(self.defaultDynamodbResponse, '1.1')
        self.assertEqual(functionName, 'FunctionName-1_1')

    def test_get_qualifier_empty(self):
        alias = vf.getAlias(self.defaultFunctionArn)
        self.assertEqual(alias, None)

    def test_get_qualifier_version(self):
        functionArn = self.defaultFunctionArn + ':5'
        alias = vf.getAlias(functionArn)
        self.assertEqual(alias, None)

    def test_get_qualifier_alias(self):
        functionArn = self.defaultFunctionArn + ':Alpha'
        alias = vf.getAlias(functionArn)
        self.assertEqual(alias, 'Alpha')

    def test_lambda_bad_response(self):
        invokeResponse = dict(self.defaultLambdaInvokeResponse)
        invokeResponse.pop('Payload')
        with self.assertRaises(vf.LambdaInvokeError):
            lambdaOutput = vf.getLambdaOutput(invokeResponse)
    
    def test_invalid_lambda_output(self):
        invokeResponse = dict(self.defaultLambdaInvokeResponse)
        invokeResponse['Payload'] = io.BufferedReader(io.BytesIO(b'{"successful": false}'))
        with self.assertRaises(vf.LambdaInvokeError):
            lambdaOutput = vf.getLambdaOutput(invokeResponse)
        invokeResponse['Payload'] = io.BufferedReader(io.BytesIO(b'{}'))
        with self.assertRaises(vf.LambdaInvokeError):
            lambdaOutput = vf.getLambdaOutput(invokeResponse)
    
    def test_lambda_output(self):
        lambdaOutput = vf.getLambdaOutput(self.defaultLambdaInvokeResponse)
        self.assertEqual(lambdaOutput, {'successful': True})
        