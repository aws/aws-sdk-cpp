# Whenever you make any change here, you should update it in Amazon S3.
# This function serves as glue between SNS and S3.
# 1- Receives SNS message when Trebuchet release starts
# 2- Extracts the message (which should be JSON)
# 3- Writes the JSON to a file on disk
# 4- Downloads models with the presigned URL
# 5- Writes release notes to a file
# 6- Writes release id to a file
# 7- Upload all these files as a zip file to S3

import os
import shutil
import re
import json
import zipfile
import traceback
import boto3
from botocore.vendored import requests

S3_BUCKET_NAME = os.environ['S3_BUCKET_NAME']
RELEASE_MESSAGE_FILENAME = os.environ['RELEASE_MESSAGE_FILENAME']
RELEASE_ID_FILENAME = os.environ['RELEASE_ID_FILENAME']
RELEASE_NOTES_FILENAME = os.environ['RELEASE_NOTES_FILENAME']
PIPELINE_SOURCE = os.environ['PIPELINE_SOURCE']
UPDATE_STATUS_LAMBDA_FUNCTION_NAME = os.environ['UPDATE_STATUS_LAMBDA_FUNCTION_NAME']
OUTPUT_PATH = os.path.join('/tmp', 'output')
MODELS_OUTPUT_PATH = os.path.join(OUTPUT_PATH, 'models')

s3Resource = boto3.resource('s3', region_name = os.environ['AWS_REGION'])
lambdaClient = boto3.client('lambda', region_name = os.environ['AWS_REGION'])

updateStatusMessage = {
    'stageName': 'HandleTrebuchetReleaseNotification',
    'internalMessage': '',
    'internalOnly': False,
    'messageToTrebuchet': {
        'releaseId' : '',
        'language' : 'CPP',
        'releaseState' : '',
        'statusMessage' : ''
    }
}

def lambda_handler(event, context):
    try:
        releaseMessage = json.loads(event['Records'][0]['Sns']['Message'])
        # For local testing:
        # with open(RELEASE_MESSAGE_FILENAME, 'r') as releaseMessageFile:
        #     releaseMessage = json.loads(releaseMessageFile.read())
        print('[SNS] Receiving message from Trebuchet:', end = ' ')
        print(releaseMessage)

        if os.path.isdir(OUTPUT_PATH):
            shutil.rmtree(OUTPUT_PATH)
        os.mkdir(OUTPUT_PATH)
        os.mkdir(MODELS_OUTPUT_PATH)
        with open(os.path.join(OUTPUT_PATH, RELEASE_MESSAGE_FILENAME), 'w') as releaseMessageFile:
            releaseMessageFile.write(json.dumps(releaseMessage))
            releaseMessageFile.close()
        with open(os.path.join(OUTPUT_PATH, RELEASE_ID_FILENAME), 'w') as releaseIdFile:
            releaseIdFile.write(releaseMessage['release']['id'])
        with open(os.path.join(OUTPUT_PATH, RELEASE_NOTES_FILENAME), 'w') as releaseNotesFile:
            releaseNotesFile.write('')

        updateStatusMessage['messageToTrebuchet'] = {
            'releaseId' : releaseMessage['release']['id'],
            'language' : 'CPP',
            'releaseState' : 'InProgress',
            'statusMessage' : 'Step 0 of 4. Handling release notification from Trebuchet.'
        }
        updateStatus(updateStatusMessage)

        for feature in releaseMessage['release']['features']:
            print('Downloading c2j model files for ' + feature['serviceId'])
            response = requests.get(feature['c2jModels'])
            if response.status_code != 200:
                raise Exception('Error downloading c2j model with feature: ' + feature['featureArn'])

            with open(os.path.join('/tmp', 'models.tmp.zip'), 'wb') as c2jModelsZipFile:
                c2jModelsZipFile.write(response.content)

            archive = zipfile.ZipFile(os.path.join('/tmp', 'models.tmp.zip'), 'r')
            archive.debug = 3
            for info in archive.infolist():
                print('  ' + info.filename)
                if re.match(r'output/.*\.normal\.json', info.filename):
                    outputPath = os.path.join(MODELS_OUTPUT_PATH, os.path.basename(info.filename))
                    print('* copying {0} to {1}'.format(info.filename, outputPath))
                    fileHandle = archive.open(info.filename, 'r')
                    fileOutput = fileHandle.read()
                    with open(outputPath, 'wb') as destination:
                        destination.write(fileOutput)
                    fileHandle.close()

            releaseNotes = feature['releaseNotes']
            print('Append release notes for ' + feature['serviceId'])
            with open(os.path.join(OUTPUT_PATH, RELEASE_NOTES_FILENAME), 'a') as releaseNotesFile:
                releaseNotesFile.write(releaseNotes + '\n\n')

        updateStatusMessage['messageToTrebuchet']['statusMessage'] = 'Step 0 of 4. Handled release notification from Trebuchet.'
        updateStatus(updateStatusMessage)

        print('Archiving release-message, release-id, release-notes, and models directory into a zip file.')
        shutil.make_archive('/tmp/models', 'zip', OUTPUT_PATH)
        print('[S3] Sending zip file including json file to S3://{0}/{1}.'.format(S3_BUCKET_NAME, PIPELINE_SOURCE))
        response = s3Resource.meta.client.upload_file('/tmp/models.zip', S3_BUCKET_NAME, PIPELINE_SOURCE)
        print('Response:', end = ' ')
        print(response)

    except Exception:
        traceback.print_exc()
        updateStatusMessage['internalMessage'] = traceback.format_exc()
        updateStatusMessage['messageToTrebuchet']['releaseState'] = 'Blocked'
        updateStatusMessage['messageToTrebuchet']['statusMessage'] = 'Step 0 of 4. Failed to handle release notification from Trebuchet.'
        updateStatus(updateStatusMessage)

def updateStatus(releaseStatus):
    print('[Lambda] Triggering Lambda function to update status.')
    response = lambdaClient.invoke(
        FunctionName = UPDATE_STATUS_LAMBDA_FUNCTION_NAME,
        InvocationType = 'RequestResponse',
        Payload = json.dumps(releaseStatus)
    )
    print('Response:', end = ' ')
    print(response)

# lambda_handler('', '')