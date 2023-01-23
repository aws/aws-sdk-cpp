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
  class StopAutoMLJobRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API StopAutoMLJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopAutoMLJob"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the object you are requesting.</p>
     */
    inline const Aws::String& GetAutoMLJobName() const{ return m_autoMLJobName; }

    /**
     * <p>The name of the object you are requesting.</p>
     */
    inline bool AutoMLJobNameHasBeenSet() const { return m_autoMLJobNameHasBeenSet; }

    /**
     * <p>The name of the object you are requesting.</p>
     */
    inline void SetAutoMLJobName(const Aws::String& value) { m_autoMLJobNameHasBeenSet = true; m_autoMLJobName = value; }

    /**
     * <p>The name of the object you are requesting.</p>
     */
    inline void SetAutoMLJobName(Aws::String&& value) { m_autoMLJobNameHasBeenSet = true; m_autoMLJobName = std::move(value); }

    /**
     * <p>The name of the object you are requesting.</p>
     */
    inline void SetAutoMLJobName(const char* value) { m_autoMLJobNameHasBeenSet = true; m_autoMLJobName.assign(value); }

    /**
     * <p>The name of the object you are requesting.</p>
     */
    inline StopAutoMLJobRequest& WithAutoMLJobName(const Aws::String& value) { SetAutoMLJobName(value); return *this;}

    /**
     * <p>The name of the object you are requesting.</p>
     */
    inline StopAutoMLJobRequest& WithAutoMLJobName(Aws::String&& value) { SetAutoMLJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the object you are requesting.</p>
     */
    inline StopAutoMLJobRequest& WithAutoMLJobName(const char* value) { SetAutoMLJobName(value); return *this;}

  private:

    Aws::String m_autoMLJobName;
    bool m_autoMLJobNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
