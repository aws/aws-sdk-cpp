/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Configuration for processing job outputs in Amazon SageMaker Feature
   * Store.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ProcessingFeatureStoreOutput">AWS
   * API Reference</a></p>
   */
  class ProcessingFeatureStoreOutput
  {
  public:
    AWS_SAGEMAKER_API ProcessingFeatureStoreOutput();
    AWS_SAGEMAKER_API ProcessingFeatureStoreOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ProcessingFeatureStoreOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Amazon SageMaker FeatureGroup to use as the destination for
     * processing job output. Note that your processing script is responsible for
     * putting records into your Feature Store.</p>
     */
    inline const Aws::String& GetFeatureGroupName() const{ return m_featureGroupName; }

    /**
     * <p>The name of the Amazon SageMaker FeatureGroup to use as the destination for
     * processing job output. Note that your processing script is responsible for
     * putting records into your Feature Store.</p>
     */
    inline bool FeatureGroupNameHasBeenSet() const { return m_featureGroupNameHasBeenSet; }

    /**
     * <p>The name of the Amazon SageMaker FeatureGroup to use as the destination for
     * processing job output. Note that your processing script is responsible for
     * putting records into your Feature Store.</p>
     */
    inline void SetFeatureGroupName(const Aws::String& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = value; }

    /**
     * <p>The name of the Amazon SageMaker FeatureGroup to use as the destination for
     * processing job output. Note that your processing script is responsible for
     * putting records into your Feature Store.</p>
     */
    inline void SetFeatureGroupName(Aws::String&& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = std::move(value); }

    /**
     * <p>The name of the Amazon SageMaker FeatureGroup to use as the destination for
     * processing job output. Note that your processing script is responsible for
     * putting records into your Feature Store.</p>
     */
    inline void SetFeatureGroupName(const char* value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName.assign(value); }

    /**
     * <p>The name of the Amazon SageMaker FeatureGroup to use as the destination for
     * processing job output. Note that your processing script is responsible for
     * putting records into your Feature Store.</p>
     */
    inline ProcessingFeatureStoreOutput& WithFeatureGroupName(const Aws::String& value) { SetFeatureGroupName(value); return *this;}

    /**
     * <p>The name of the Amazon SageMaker FeatureGroup to use as the destination for
     * processing job output. Note that your processing script is responsible for
     * putting records into your Feature Store.</p>
     */
    inline ProcessingFeatureStoreOutput& WithFeatureGroupName(Aws::String&& value) { SetFeatureGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon SageMaker FeatureGroup to use as the destination for
     * processing job output. Note that your processing script is responsible for
     * putting records into your Feature Store.</p>
     */
    inline ProcessingFeatureStoreOutput& WithFeatureGroupName(const char* value) { SetFeatureGroupName(value); return *this;}

  private:

    Aws::String m_featureGroupName;
    bool m_featureGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
