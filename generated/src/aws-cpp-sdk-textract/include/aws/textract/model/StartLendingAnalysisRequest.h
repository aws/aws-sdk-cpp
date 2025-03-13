/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/TextractRequest.h>
#include <aws/textract/model/DocumentLocation.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/textract/model/NotificationChannel.h>
#include <aws/textract/model/OutputConfig.h>
#include <utility>

namespace Aws
{
namespace Textract
{
namespace Model
{

  /**
   */
  class StartLendingAnalysisRequest : public TextractRequest
  {
  public:
    AWS_TEXTRACT_API StartLendingAnalysisRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartLendingAnalysis"; }

    AWS_TEXTRACT_API Aws::String SerializePayload() const override;

    AWS_TEXTRACT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const DocumentLocation& GetDocumentLocation() const { return m_documentLocation; }
    inline bool DocumentLocationHasBeenSet() const { return m_documentLocationHasBeenSet; }
    template<typename DocumentLocationT = DocumentLocation>
    void SetDocumentLocation(DocumentLocationT&& value) { m_documentLocationHasBeenSet = true; m_documentLocation = std::forward<DocumentLocationT>(value); }
    template<typename DocumentLocationT = DocumentLocation>
    StartLendingAnalysisRequest& WithDocumentLocation(DocumentLocationT&& value) { SetDocumentLocation(std::forward<DocumentLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The idempotent token that you use to identify the start request. If you use
     * the same token with multiple <code>StartLendingAnalysis</code> requests, the
     * same <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to
     * prevent the same job from being accidentally started more than once. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/textract/latest/dg/api-sync.html">Calling
     * Amazon Textract Asynchronous Operations</a>.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    StartLendingAnalysisRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier that you specify to be included in the completion notification
     * published to the Amazon SNS topic. For example, you can use <code>JobTag</code>
     * to identify the type of document that the completion notification corresponds to
     * (such as a tax form or a receipt).</p>
     */
    inline const Aws::String& GetJobTag() const { return m_jobTag; }
    inline bool JobTagHasBeenSet() const { return m_jobTagHasBeenSet; }
    template<typename JobTagT = Aws::String>
    void SetJobTag(JobTagT&& value) { m_jobTagHasBeenSet = true; m_jobTag = std::forward<JobTagT>(value); }
    template<typename JobTagT = Aws::String>
    StartLendingAnalysisRequest& WithJobTag(JobTagT&& value) { SetJobTag(std::forward<JobTagT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const NotificationChannel& GetNotificationChannel() const { return m_notificationChannel; }
    inline bool NotificationChannelHasBeenSet() const { return m_notificationChannelHasBeenSet; }
    template<typename NotificationChannelT = NotificationChannel>
    void SetNotificationChannel(NotificationChannelT&& value) { m_notificationChannelHasBeenSet = true; m_notificationChannel = std::forward<NotificationChannelT>(value); }
    template<typename NotificationChannelT = NotificationChannel>
    StartLendingAnalysisRequest& WithNotificationChannel(NotificationChannelT&& value) { SetNotificationChannel(std::forward<NotificationChannelT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const OutputConfig& GetOutputConfig() const { return m_outputConfig; }
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }
    template<typename OutputConfigT = OutputConfig>
    void SetOutputConfig(OutputConfigT&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::forward<OutputConfigT>(value); }
    template<typename OutputConfigT = OutputConfig>
    StartLendingAnalysisRequest& WithOutputConfig(OutputConfigT&& value) { SetOutputConfig(std::forward<OutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key used to encrypt the inference results. This can be in either Key
     * ID or Key Alias format. When a KMS key is provided, the KMS key will be used for
     * server-side encryption of the objects in the customer bucket. When this
     * parameter is not enabled, the result will be encrypted server side, using
     * SSE-S3. </p>
     */
    inline const Aws::String& GetKMSKeyId() const { return m_kMSKeyId; }
    inline bool KMSKeyIdHasBeenSet() const { return m_kMSKeyIdHasBeenSet; }
    template<typename KMSKeyIdT = Aws::String>
    void SetKMSKeyId(KMSKeyIdT&& value) { m_kMSKeyIdHasBeenSet = true; m_kMSKeyId = std::forward<KMSKeyIdT>(value); }
    template<typename KMSKeyIdT = Aws::String>
    StartLendingAnalysisRequest& WithKMSKeyId(KMSKeyIdT&& value) { SetKMSKeyId(std::forward<KMSKeyIdT>(value)); return *this;}
    ///@}
  private:

    DocumentLocation m_documentLocation;
    bool m_documentLocationHasBeenSet = false;

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
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
