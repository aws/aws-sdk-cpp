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
  class DescribeComputeQuotaRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DescribeComputeQuotaRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeComputeQuota"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>ID of the compute allocation definition.</p>
     */
    inline const Aws::String& GetComputeQuotaId() const{ return m_computeQuotaId; }
    inline bool ComputeQuotaIdHasBeenSet() const { return m_computeQuotaIdHasBeenSet; }
    inline void SetComputeQuotaId(const Aws::String& value) { m_computeQuotaIdHasBeenSet = true; m_computeQuotaId = value; }
    inline void SetComputeQuotaId(Aws::String&& value) { m_computeQuotaIdHasBeenSet = true; m_computeQuotaId = std::move(value); }
    inline void SetComputeQuotaId(const char* value) { m_computeQuotaIdHasBeenSet = true; m_computeQuotaId.assign(value); }
    inline DescribeComputeQuotaRequest& WithComputeQuotaId(const Aws::String& value) { SetComputeQuotaId(value); return *this;}
    inline DescribeComputeQuotaRequest& WithComputeQuotaId(Aws::String&& value) { SetComputeQuotaId(std::move(value)); return *this;}
    inline DescribeComputeQuotaRequest& WithComputeQuotaId(const char* value) { SetComputeQuotaId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version of the compute allocation definition.</p>
     */
    inline int GetComputeQuotaVersion() const{ return m_computeQuotaVersion; }
    inline bool ComputeQuotaVersionHasBeenSet() const { return m_computeQuotaVersionHasBeenSet; }
    inline void SetComputeQuotaVersion(int value) { m_computeQuotaVersionHasBeenSet = true; m_computeQuotaVersion = value; }
    inline DescribeComputeQuotaRequest& WithComputeQuotaVersion(int value) { SetComputeQuotaVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_computeQuotaId;
    bool m_computeQuotaIdHasBeenSet = false;

    int m_computeQuotaVersion;
    bool m_computeQuotaVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
