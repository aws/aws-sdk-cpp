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
  class DescribeAutoMLJobRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DescribeAutoMLJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAutoMLJob"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Requests information about an AutoML job using its unique name.</p>
     */
    inline const Aws::String& GetAutoMLJobName() const{ return m_autoMLJobName; }

    /**
     * <p>Requests information about an AutoML job using its unique name.</p>
     */
    inline bool AutoMLJobNameHasBeenSet() const { return m_autoMLJobNameHasBeenSet; }

    /**
     * <p>Requests information about an AutoML job using its unique name.</p>
     */
    inline void SetAutoMLJobName(const Aws::String& value) { m_autoMLJobNameHasBeenSet = true; m_autoMLJobName = value; }

    /**
     * <p>Requests information about an AutoML job using its unique name.</p>
     */
    inline void SetAutoMLJobName(Aws::String&& value) { m_autoMLJobNameHasBeenSet = true; m_autoMLJobName = std::move(value); }

    /**
     * <p>Requests information about an AutoML job using its unique name.</p>
     */
    inline void SetAutoMLJobName(const char* value) { m_autoMLJobNameHasBeenSet = true; m_autoMLJobName.assign(value); }

    /**
     * <p>Requests information about an AutoML job using its unique name.</p>
     */
    inline DescribeAutoMLJobRequest& WithAutoMLJobName(const Aws::String& value) { SetAutoMLJobName(value); return *this;}

    /**
     * <p>Requests information about an AutoML job using its unique name.</p>
     */
    inline DescribeAutoMLJobRequest& WithAutoMLJobName(Aws::String&& value) { SetAutoMLJobName(std::move(value)); return *this;}

    /**
     * <p>Requests information about an AutoML job using its unique name.</p>
     */
    inline DescribeAutoMLJobRequest& WithAutoMLJobName(const char* value) { SetAutoMLJobName(value); return *this;}

  private:

    Aws::String m_autoMLJobName;
    bool m_autoMLJobNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
