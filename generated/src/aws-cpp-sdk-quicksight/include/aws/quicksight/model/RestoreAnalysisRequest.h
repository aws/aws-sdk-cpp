/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace QuickSight
{
namespace Model
{

  /**
   */
  class RestoreAnalysisRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API RestoreAnalysisRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestoreAnalysis"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

    AWS_QUICKSIGHT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that contains the analysis.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline RestoreAnalysisRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline RestoreAnalysisRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline RestoreAnalysisRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the analysis that you're restoring.</p>
     */
    inline const Aws::String& GetAnalysisId() const{ return m_analysisId; }
    inline bool AnalysisIdHasBeenSet() const { return m_analysisIdHasBeenSet; }
    inline void SetAnalysisId(const Aws::String& value) { m_analysisIdHasBeenSet = true; m_analysisId = value; }
    inline void SetAnalysisId(Aws::String&& value) { m_analysisIdHasBeenSet = true; m_analysisId = std::move(value); }
    inline void SetAnalysisId(const char* value) { m_analysisIdHasBeenSet = true; m_analysisId.assign(value); }
    inline RestoreAnalysisRequest& WithAnalysisId(const Aws::String& value) { SetAnalysisId(value); return *this;}
    inline RestoreAnalysisRequest& WithAnalysisId(Aws::String&& value) { SetAnalysisId(std::move(value)); return *this;}
    inline RestoreAnalysisRequest& WithAnalysisId(const char* value) { SetAnalysisId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean value that determines if the analysis will be restored to folders
     * that it previously resided in. A <code>True</code> value restores analysis back
     * to all folders that it previously resided in. A <code>False</code> value
     * restores the analysis but does not restore the analysis back to all previously
     * resided folders. Restoring a restricted analysis requires this parameter to be
     * set to <code>True</code>.</p>
     */
    inline bool GetRestoreToFolders() const{ return m_restoreToFolders; }
    inline bool RestoreToFoldersHasBeenSet() const { return m_restoreToFoldersHasBeenSet; }
    inline void SetRestoreToFolders(bool value) { m_restoreToFoldersHasBeenSet = true; m_restoreToFolders = value; }
    inline RestoreAnalysisRequest& WithRestoreToFolders(bool value) { SetRestoreToFolders(value); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_analysisId;
    bool m_analysisIdHasBeenSet = false;

    bool m_restoreToFolders;
    bool m_restoreToFoldersHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
