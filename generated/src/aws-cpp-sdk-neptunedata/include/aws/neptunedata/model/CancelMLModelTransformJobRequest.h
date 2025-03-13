/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/neptunedata/NeptunedataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace neptunedata
{
namespace Model
{

  /**
   */
  class CancelMLModelTransformJobRequest : public NeptunedataRequest
  {
  public:
    AWS_NEPTUNEDATA_API CancelMLModelTransformJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelMLModelTransformJob"; }

    AWS_NEPTUNEDATA_API Aws::String SerializePayload() const override;

    AWS_NEPTUNEDATA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The unique ID of the model transform job to be canceled.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CancelMLModelTransformJobRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of an IAM role that provides Neptune access to SageMaker and Amazon
     * S3 resources. This must be listed in your DB cluster parameter group or an error
     * will occur.</p>
     */
    inline const Aws::String& GetNeptuneIamRoleArn() const { return m_neptuneIamRoleArn; }
    inline bool NeptuneIamRoleArnHasBeenSet() const { return m_neptuneIamRoleArnHasBeenSet; }
    template<typename NeptuneIamRoleArnT = Aws::String>
    void SetNeptuneIamRoleArn(NeptuneIamRoleArnT&& value) { m_neptuneIamRoleArnHasBeenSet = true; m_neptuneIamRoleArn = std::forward<NeptuneIamRoleArnT>(value); }
    template<typename NeptuneIamRoleArnT = Aws::String>
    CancelMLModelTransformJobRequest& WithNeptuneIamRoleArn(NeptuneIamRoleArnT&& value) { SetNeptuneIamRoleArn(std::forward<NeptuneIamRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this flag is set to <code>TRUE</code>, all Neptune ML S3 artifacts should
     * be deleted when the job is stopped. The default is <code>FALSE</code>.</p>
     */
    inline bool GetClean() const { return m_clean; }
    inline bool CleanHasBeenSet() const { return m_cleanHasBeenSet; }
    inline void SetClean(bool value) { m_cleanHasBeenSet = true; m_clean = value; }
    inline CancelMLModelTransformJobRequest& WithClean(bool value) { SetClean(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_neptuneIamRoleArn;
    bool m_neptuneIamRoleArnHasBeenSet = false;

    bool m_clean{false};
    bool m_cleanHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
