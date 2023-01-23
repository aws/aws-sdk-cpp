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
  class DeleteFeatureGroupRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DeleteFeatureGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteFeatureGroup"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the <code>FeatureGroup</code> you want to delete. The name must
     * be unique within an Amazon Web Services Region in an Amazon Web Services
     * account. </p>
     */
    inline const Aws::String& GetFeatureGroupName() const{ return m_featureGroupName; }

    /**
     * <p>The name of the <code>FeatureGroup</code> you want to delete. The name must
     * be unique within an Amazon Web Services Region in an Amazon Web Services
     * account. </p>
     */
    inline bool FeatureGroupNameHasBeenSet() const { return m_featureGroupNameHasBeenSet; }

    /**
     * <p>The name of the <code>FeatureGroup</code> you want to delete. The name must
     * be unique within an Amazon Web Services Region in an Amazon Web Services
     * account. </p>
     */
    inline void SetFeatureGroupName(const Aws::String& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = value; }

    /**
     * <p>The name of the <code>FeatureGroup</code> you want to delete. The name must
     * be unique within an Amazon Web Services Region in an Amazon Web Services
     * account. </p>
     */
    inline void SetFeatureGroupName(Aws::String&& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = std::move(value); }

    /**
     * <p>The name of the <code>FeatureGroup</code> you want to delete. The name must
     * be unique within an Amazon Web Services Region in an Amazon Web Services
     * account. </p>
     */
    inline void SetFeatureGroupName(const char* value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName.assign(value); }

    /**
     * <p>The name of the <code>FeatureGroup</code> you want to delete. The name must
     * be unique within an Amazon Web Services Region in an Amazon Web Services
     * account. </p>
     */
    inline DeleteFeatureGroupRequest& WithFeatureGroupName(const Aws::String& value) { SetFeatureGroupName(value); return *this;}

    /**
     * <p>The name of the <code>FeatureGroup</code> you want to delete. The name must
     * be unique within an Amazon Web Services Region in an Amazon Web Services
     * account. </p>
     */
    inline DeleteFeatureGroupRequest& WithFeatureGroupName(Aws::String&& value) { SetFeatureGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the <code>FeatureGroup</code> you want to delete. The name must
     * be unique within an Amazon Web Services Region in an Amazon Web Services
     * account. </p>
     */
    inline DeleteFeatureGroupRequest& WithFeatureGroupName(const char* value) { SetFeatureGroupName(value); return *this;}

  private:

    Aws::String m_featureGroupName;
    bool m_featureGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
