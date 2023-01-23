/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/TextractRequest.h>
#include <aws/textract/model/DocumentLocation.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/textract/model/NotificationChannel.h>
#include <aws/textract/model/OutputConfig.h>
#include <aws/textract/model/QueriesConfig.h>
#include <aws/textract/model/FeatureType.h>
#include <utility>

namespace Aws
{
namespace Textract
{
namespace Model
{

  /**
   */
  class StartDocumentAnalysisRequest : public TextractRequest
  {
  public:
    AWS_TEXTRACT_API StartDocumentAnalysisRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartDocumentAnalysis"; }

    AWS_TEXTRACT_API Aws::String SerializePayload() const override;

    AWS_TEXTRACT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The location of the document to be processed.</p>
     */
    inline const DocumentLocation& GetDocumentLocation() const{ return m_documentLocation; }

    /**
     * <p>The location of the document to be processed.</p>
     */
    inline bool DocumentLocationHasBeenSet() const { return m_documentLocationHasBeenSet; }

    /**
     * <p>The location of the document to be processed.</p>
     */
    inline void SetDocumentLocation(const DocumentLocation& value) { m_documentLocationHasBeenSet = true; m_documentLocation = value; }

    /**
     * <p>The location of the document to be processed.</p>
     */
    inline void SetDocumentLocation(DocumentLocation&& value) { m_documentLocationHasBeenSet = true; m_documentLocation = std::move(value); }

    /**
     * <p>The location of the document to be processed.</p>
     */
    inline StartDocumentAnalysisRequest& WithDocumentLocation(const DocumentLocation& value) { SetDocumentLocation(value); return *this;}

    /**
     * <p>The location of the document to be processed.</p>
     */
    inline StartDocumentAnalysisRequest& WithDocumentLocation(DocumentLocation&& value) { SetDocumentLocation(std::move(value)); return *this;}


    /**
     * <p>A list of the types of analysis to perform. Add TABLES to the list to return
     * information about the tables that are detected in the input document. Add FORMS
     * to return detected form data. To perform both types of analysis, add TABLES and
     * FORMS to <code>FeatureTypes</code>. All lines and words detected in the document
     * are included in the response (including text that isn't related to the value of
     * <code>FeatureTypes</code>). </p>
     */
    inline const Aws::Vector<FeatureType>& GetFeatureTypes() const{ return m_featureTypes; }

    /**
     * <p>A list of the types of analysis to perform. Add TABLES to the list to return
     * information about the tables that are detected in the input document. Add FORMS
     * to return detected form data. To perform both types of analysis, add TABLES and
     * FORMS to <code>FeatureTypes</code>. All lines and words detected in the document
     * are included in the response (including text that isn't related to the value of
     * <code>FeatureTypes</code>). </p>
     */
    inline bool FeatureTypesHasBeenSet() const { return m_featureTypesHasBeenSet; }

    /**
     * <p>A list of the types of analysis to perform. Add TABLES to the list to return
     * information about the tables that are detected in the input document. Add FORMS
     * to return detected form data. To perform both types of analysis, add TABLES and
     * FORMS to <code>FeatureTypes</code>. All lines and words detected in the document
     * are included in the response (including text that isn't related to the value of
     * <code>FeatureTypes</code>). </p>
     */
    inline void SetFeatureTypes(const Aws::Vector<FeatureType>& value) { m_featureTypesHasBeenSet = true; m_featureTypes = value; }

    /**
     * <p>A list of the types of analysis to perform. Add TABLES to the list to return
     * information about the tables that are detected in the input document. Add FORMS
     * to return detected form data. To perform both types of analysis, add TABLES and
     * FORMS to <code>FeatureTypes</code>. All lines and words detected in the document
     * are included in the response (including text that isn't related to the value of
     * <code>FeatureTypes</code>). </p>
     */
    inline void SetFeatureTypes(Aws::Vector<FeatureType>&& value) { m_featureTypesHasBeenSet = true; m_featureTypes = std::move(value); }

    /**
     * <p>A list of the types of analysis to perform. Add TABLES to the list to return
     * information about the tables that are detected in the input document. Add FORMS
     * to return detected form data. To perform both types of analysis, add TABLES and
     * FORMS to <code>FeatureTypes</code>. All lines and words detected in the document
     * are included in the response (including text that isn't related to the value of
     * <code>FeatureTypes</code>). </p>
     */
    inline StartDocumentAnalysisRequest& WithFeatureTypes(const Aws::Vector<FeatureType>& value) { SetFeatureTypes(value); return *this;}

    /**
     * <p>A list of the types of analysis to perform. Add TABLES to the list to return
     * information about the tables that are detected in the input document. Add FORMS
     * to return detected form data. To perform both types of analysis, add TABLES and
     * FORMS to <code>FeatureTypes</code>. All lines and words detected in the document
     * are included in the response (including text that isn't related to the value of
     * <code>FeatureTypes</code>). </p>
     */
    inline StartDocumentAnalysisRequest& WithFeatureTypes(Aws::Vector<FeatureType>&& value) { SetFeatureTypes(std::move(value)); return *this;}

    /**
     * <p>A list of the types of analysis to perform. Add TABLES to the list to return
     * information about the tables that are detected in the input document. Add FORMS
     * to return detected form data. To perform both types of analysis, add TABLES and
     * FORMS to <code>FeatureTypes</code>. All lines and words detected in the document
     * are included in the response (including text that isn't related to the value of
     * <code>FeatureTypes</code>). </p>
     */
    inline StartDocumentAnalysisRequest& AddFeatureTypes(const FeatureType& value) { m_featureTypesHasBeenSet = true; m_featureTypes.push_back(value); return *this; }

    /**
     * <p>A list of the types of analysis to perform. Add TABLES to the list to return
     * information about the tables that are detected in the input document. Add FORMS
     * to return detected form data. To perform both types of analysis, add TABLES and
     * FORMS to <code>FeatureTypes</code>. All lines and words detected in the document
     * are included in the response (including text that isn't related to the value of
     * <code>FeatureTypes</code>). </p>
     */
    inline StartDocumentAnalysisRequest& AddFeatureTypes(FeatureType&& value) { m_featureTypesHasBeenSet = true; m_featureTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The idempotent token that you use to identify the start request. If you use
     * the same token with multiple <code>StartDocumentAnalysis</code> requests, the
     * same <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to
     * prevent the same job from being accidentally started more than once. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/textract/latest/dg/api-async.html">Calling
     * Amazon Textract Asynchronous Operations</a>.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>The idempotent token that you use to identify the start request. If you use
     * the same token with multiple <code>StartDocumentAnalysis</code> requests, the
     * same <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to
     * prevent the same job from being accidentally started more than once. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/textract/latest/dg/api-async.html">Calling
     * Amazon Textract Asynchronous Operations</a>.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>The idempotent token that you use to identify the start request. If you use
     * the same token with multiple <code>StartDocumentAnalysis</code> requests, the
     * same <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to
     * prevent the same job from being accidentally started more than once. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/textract/latest/dg/api-async.html">Calling
     * Amazon Textract Asynchronous Operations</a>.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>The idempotent token that you use to identify the start request. If you use
     * the same token with multiple <code>StartDocumentAnalysis</code> requests, the
     * same <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to
     * prevent the same job from being accidentally started more than once. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/textract/latest/dg/api-async.html">Calling
     * Amazon Textract Asynchronous Operations</a>.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>The idempotent token that you use to identify the start request. If you use
     * the same token with multiple <code>StartDocumentAnalysis</code> requests, the
     * same <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to
     * prevent the same job from being accidentally started more than once. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/textract/latest/dg/api-async.html">Calling
     * Amazon Textract Asynchronous Operations</a>.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>The idempotent token that you use to identify the start request. If you use
     * the same token with multiple <code>StartDocumentAnalysis</code> requests, the
     * same <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to
     * prevent the same job from being accidentally started more than once. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/textract/latest/dg/api-async.html">Calling
     * Amazon Textract Asynchronous Operations</a>.</p>
     */
    inline StartDocumentAnalysisRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>The idempotent token that you use to identify the start request. If you use
     * the same token with multiple <code>StartDocumentAnalysis</code> requests, the
     * same <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to
     * prevent the same job from being accidentally started more than once. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/textract/latest/dg/api-async.html">Calling
     * Amazon Textract Asynchronous Operations</a>.</p>
     */
    inline StartDocumentAnalysisRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>The idempotent token that you use to identify the start request. If you use
     * the same token with multiple <code>StartDocumentAnalysis</code> requests, the
     * same <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to
     * prevent the same job from being accidentally started more than once. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/textract/latest/dg/api-async.html">Calling
     * Amazon Textract Asynchronous Operations</a>.</p>
     */
    inline StartDocumentAnalysisRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>An identifier that you specify that's included in the completion notification
     * published to the Amazon SNS topic. For example, you can use <code>JobTag</code>
     * to identify the type of document that the completion notification corresponds to
     * (such as a tax form or a receipt).</p>
     */
    inline const Aws::String& GetJobTag() const{ return m_jobTag; }

    /**
     * <p>An identifier that you specify that's included in the completion notification
     * published to the Amazon SNS topic. For example, you can use <code>JobTag</code>
     * to identify the type of document that the completion notification corresponds to
     * (such as a tax form or a receipt).</p>
     */
    inline bool JobTagHasBeenSet() const { return m_jobTagHasBeenSet; }

    /**
     * <p>An identifier that you specify that's included in the completion notification
     * published to the Amazon SNS topic. For example, you can use <code>JobTag</code>
     * to identify the type of document that the completion notification corresponds to
     * (such as a tax form or a receipt).</p>
     */
    inline void SetJobTag(const Aws::String& value) { m_jobTagHasBeenSet = true; m_jobTag = value; }

    /**
     * <p>An identifier that you specify that's included in the completion notification
     * published to the Amazon SNS topic. For example, you can use <code>JobTag</code>
     * to identify the type of document that the completion notification corresponds to
     * (such as a tax form or a receipt).</p>
     */
    inline void SetJobTag(Aws::String&& value) { m_jobTagHasBeenSet = true; m_jobTag = std::move(value); }

    /**
     * <p>An identifier that you specify that's included in the completion notification
     * published to the Amazon SNS topic. For example, you can use <code>JobTag</code>
     * to identify the type of document that the completion notification corresponds to
     * (such as a tax form or a receipt).</p>
     */
    inline void SetJobTag(const char* value) { m_jobTagHasBeenSet = true; m_jobTag.assign(value); }

    /**
     * <p>An identifier that you specify that's included in the completion notification
     * published to the Amazon SNS topic. For example, you can use <code>JobTag</code>
     * to identify the type of document that the completion notification corresponds to
     * (such as a tax form or a receipt).</p>
     */
    inline StartDocumentAnalysisRequest& WithJobTag(const Aws::String& value) { SetJobTag(value); return *this;}

    /**
     * <p>An identifier that you specify that's included in the completion notification
     * published to the Amazon SNS topic. For example, you can use <code>JobTag</code>
     * to identify the type of document that the completion notification corresponds to
     * (such as a tax form or a receipt).</p>
     */
    inline StartDocumentAnalysisRequest& WithJobTag(Aws::String&& value) { SetJobTag(std::move(value)); return *this;}

    /**
     * <p>An identifier that you specify that's included in the completion notification
     * published to the Amazon SNS topic. For example, you can use <code>JobTag</code>
     * to identify the type of document that the completion notification corresponds to
     * (such as a tax form or a receipt).</p>
     */
    inline StartDocumentAnalysisRequest& WithJobTag(const char* value) { SetJobTag(value); return *this;}


    /**
     * <p>The Amazon SNS topic ARN that you want Amazon Textract to publish the
     * completion status of the operation to. </p>
     */
    inline const NotificationChannel& GetNotificationChannel() const{ return m_notificationChannel; }

    /**
     * <p>The Amazon SNS topic ARN that you want Amazon Textract to publish the
     * completion status of the operation to. </p>
     */
    inline bool NotificationChannelHasBeenSet() const { return m_notificationChannelHasBeenSet; }

    /**
     * <p>The Amazon SNS topic ARN that you want Amazon Textract to publish the
     * completion status of the operation to. </p>
     */
    inline void SetNotificationChannel(const NotificationChannel& value) { m_notificationChannelHasBeenSet = true; m_notificationChannel = value; }

    /**
     * <p>The Amazon SNS topic ARN that you want Amazon Textract to publish the
     * completion status of the operation to. </p>
     */
    inline void SetNotificationChannel(NotificationChannel&& value) { m_notificationChannelHasBeenSet = true; m_notificationChannel = std::move(value); }

    /**
     * <p>The Amazon SNS topic ARN that you want Amazon Textract to publish the
     * completion status of the operation to. </p>
     */
    inline StartDocumentAnalysisRequest& WithNotificationChannel(const NotificationChannel& value) { SetNotificationChannel(value); return *this;}

    /**
     * <p>The Amazon SNS topic ARN that you want Amazon Textract to publish the
     * completion status of the operation to. </p>
     */
    inline StartDocumentAnalysisRequest& WithNotificationChannel(NotificationChannel&& value) { SetNotificationChannel(std::move(value)); return *this;}


    /**
     * <p>Sets if the output will go to a customer defined bucket. By default, Amazon
     * Textract will save the results internally to be accessed by the
     * GetDocumentAnalysis operation.</p>
     */
    inline const OutputConfig& GetOutputConfig() const{ return m_outputConfig; }

    /**
     * <p>Sets if the output will go to a customer defined bucket. By default, Amazon
     * Textract will save the results internally to be accessed by the
     * GetDocumentAnalysis operation.</p>
     */
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }

    /**
     * <p>Sets if the output will go to a customer defined bucket. By default, Amazon
     * Textract will save the results internally to be accessed by the
     * GetDocumentAnalysis operation.</p>
     */
    inline void SetOutputConfig(const OutputConfig& value) { m_outputConfigHasBeenSet = true; m_outputConfig = value; }

    /**
     * <p>Sets if the output will go to a customer defined bucket. By default, Amazon
     * Textract will save the results internally to be accessed by the
     * GetDocumentAnalysis operation.</p>
     */
    inline void SetOutputConfig(OutputConfig&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::move(value); }

    /**
     * <p>Sets if the output will go to a customer defined bucket. By default, Amazon
     * Textract will save the results internally to be accessed by the
     * GetDocumentAnalysis operation.</p>
     */
    inline StartDocumentAnalysisRequest& WithOutputConfig(const OutputConfig& value) { SetOutputConfig(value); return *this;}

    /**
     * <p>Sets if the output will go to a customer defined bucket. By default, Amazon
     * Textract will save the results internally to be accessed by the
     * GetDocumentAnalysis operation.</p>
     */
    inline StartDocumentAnalysisRequest& WithOutputConfig(OutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}


    /**
     * <p>The KMS key used to encrypt the inference results. This can be in either Key
     * ID or Key Alias format. When a KMS key is provided, the KMS key will be used for
     * server-side encryption of the objects in the customer bucket. When this
     * parameter is not enabled, the result will be encrypted server side,using
     * SSE-S3.</p>
     */
    inline const Aws::String& GetKMSKeyId() const{ return m_kMSKeyId; }

    /**
     * <p>The KMS key used to encrypt the inference results. This can be in either Key
     * ID or Key Alias format. When a KMS key is provided, the KMS key will be used for
     * server-side encryption of the objects in the customer bucket. When this
     * parameter is not enabled, the result will be encrypted server side,using
     * SSE-S3.</p>
     */
    inline bool KMSKeyIdHasBeenSet() const { return m_kMSKeyIdHasBeenSet; }

    /**
     * <p>The KMS key used to encrypt the inference results. This can be in either Key
     * ID or Key Alias format. When a KMS key is provided, the KMS key will be used for
     * server-side encryption of the objects in the customer bucket. When this
     * parameter is not enabled, the result will be encrypted server side,using
     * SSE-S3.</p>
     */
    inline void SetKMSKeyId(const Aws::String& value) { m_kMSKeyIdHasBeenSet = true; m_kMSKeyId = value; }

    /**
     * <p>The KMS key used to encrypt the inference results. This can be in either Key
     * ID or Key Alias format. When a KMS key is provided, the KMS key will be used for
     * server-side encryption of the objects in the customer bucket. When this
     * parameter is not enabled, the result will be encrypted server side,using
     * SSE-S3.</p>
     */
    inline void SetKMSKeyId(Aws::String&& value) { m_kMSKeyIdHasBeenSet = true; m_kMSKeyId = std::move(value); }

    /**
     * <p>The KMS key used to encrypt the inference results. This can be in either Key
     * ID or Key Alias format. When a KMS key is provided, the KMS key will be used for
     * server-side encryption of the objects in the customer bucket. When this
     * parameter is not enabled, the result will be encrypted server side,using
     * SSE-S3.</p>
     */
    inline void SetKMSKeyId(const char* value) { m_kMSKeyIdHasBeenSet = true; m_kMSKeyId.assign(value); }

    /**
     * <p>The KMS key used to encrypt the inference results. This can be in either Key
     * ID or Key Alias format. When a KMS key is provided, the KMS key will be used for
     * server-side encryption of the objects in the customer bucket. When this
     * parameter is not enabled, the result will be encrypted server side,using
     * SSE-S3.</p>
     */
    inline StartDocumentAnalysisRequest& WithKMSKeyId(const Aws::String& value) { SetKMSKeyId(value); return *this;}

    /**
     * <p>The KMS key used to encrypt the inference results. This can be in either Key
     * ID or Key Alias format. When a KMS key is provided, the KMS key will be used for
     * server-side encryption of the objects in the customer bucket. When this
     * parameter is not enabled, the result will be encrypted server side,using
     * SSE-S3.</p>
     */
    inline StartDocumentAnalysisRequest& WithKMSKeyId(Aws::String&& value) { SetKMSKeyId(std::move(value)); return *this;}

    /**
     * <p>The KMS key used to encrypt the inference results. This can be in either Key
     * ID or Key Alias format. When a KMS key is provided, the KMS key will be used for
     * server-side encryption of the objects in the customer bucket. When this
     * parameter is not enabled, the result will be encrypted server side,using
     * SSE-S3.</p>
     */
    inline StartDocumentAnalysisRequest& WithKMSKeyId(const char* value) { SetKMSKeyId(value); return *this;}


    
    inline const QueriesConfig& GetQueriesConfig() const{ return m_queriesConfig; }

    
    inline bool QueriesConfigHasBeenSet() const { return m_queriesConfigHasBeenSet; }

    
    inline void SetQueriesConfig(const QueriesConfig& value) { m_queriesConfigHasBeenSet = true; m_queriesConfig = value; }

    
    inline void SetQueriesConfig(QueriesConfig&& value) { m_queriesConfigHasBeenSet = true; m_queriesConfig = std::move(value); }

    
    inline StartDocumentAnalysisRequest& WithQueriesConfig(const QueriesConfig& value) { SetQueriesConfig(value); return *this;}

    
    inline StartDocumentAnalysisRequest& WithQueriesConfig(QueriesConfig&& value) { SetQueriesConfig(std::move(value)); return *this;}

  private:

    DocumentLocation m_documentLocation;
    bool m_documentLocationHasBeenSet = false;

    Aws::Vector<FeatureType> m_featureTypes;
    bool m_featureTypesHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_jobTag;
    bool m_jobTagHasBeenSet = false;

    NotificationChannel m_notificationChannel;
    bool m_notificationChannelHasBeenSet = false;

    OutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet = false;

    Aws::String m_kMSKeyId;
    bool m_kMSKeyIdHasBeenSet = false;

    QueriesConfig m_queriesConfig;
    bool m_queriesConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
