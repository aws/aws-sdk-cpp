/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreatePresignedNotebookInstanceUrlRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreatePresignedNotebookInstanceUrlRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePresignedNotebookInstanceUrl"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the notebook instance.</p>
     */
    inline const Aws::String& GetNotebookInstanceName() const{ return m_notebookInstanceName; }

    /**
     * <p>The name of the notebook instance.</p>
     */
    inline bool NotebookInstanceNameHasBeenSet() const { return m_notebookInstanceNameHasBeenSet; }

    /**
     * <p>The name of the notebook instance.</p>
     */
    inline void SetNotebookInstanceName(const Aws::String& value) { m_notebookInstanceNameHasBeenSet = true; m_notebookInstanceName = value; }

    /**
     * <p>The name of the notebook instance.</p>
     */
    inline void SetNotebookInstanceName(Aws::String&& value) { m_notebookInstanceNameHasBeenSet = true; m_notebookInstanceName = std::move(value); }

    /**
     * <p>The name of the notebook instance.</p>
     */
    inline void SetNotebookInstanceName(const char* value) { m_notebookInstanceNameHasBeenSet = true; m_notebookInstanceName.assign(value); }

    /**
     * <p>The name of the notebook instance.</p>
     */
    inline CreatePresignedNotebookInstanceUrlRequest& WithNotebookInstanceName(const Aws::String& value) { SetNotebookInstanceName(value); return *this;}

    /**
     * <p>The name of the notebook instance.</p>
     */
    inline CreatePresignedNotebookInstanceUrlRequest& WithNotebookInstanceName(Aws::String&& value) { SetNotebookInstanceName(std::move(value)); return *this;}

    /**
     * <p>The name of the notebook instance.</p>
     */
    inline CreatePresignedNotebookInstanceUrlRequest& WithNotebookInstanceName(const char* value) { SetNotebookInstanceName(value); return *this;}


    /**
     * <p>The duration of the session, in seconds. The default is 12 hours.</p>
     */
    inline int GetSessionExpirationDurationInSeconds() const{ return m_sessionExpirationDurationInSeconds; }

    /**
     * <p>The duration of the session, in seconds. The default is 12 hours.</p>
     */
    inline bool SessionExpirationDurationInSecondsHasBeenSet() const { return m_sessionExpirationDurationInSecondsHasBeenSet; }

    /**
     * <p>The duration of the session, in seconds. The default is 12 hours.</p>
     */
    inline void SetSessionExpirationDurationInSeconds(int value) { m_sessionExpirationDurationInSecondsHasBeenSet = true; m_sessionExpirationDurationInSeconds = value; }

    /**
     * <p>The duration of the session, in seconds. The default is 12 hours.</p>
     */
    inline CreatePresignedNotebookInstanceUrlRequest& WithSessionExpirationDurationInSeconds(int value) { SetSessionExpirationDurationInSeconds(value); return *this;}

  private:

    Aws::String m_notebookInstanceName;
    bool m_notebookInstanceNameHasBeenSet = false;

    int m_sessionExpirationDurationInSeconds;
    bool m_sessionExpirationDurationInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
