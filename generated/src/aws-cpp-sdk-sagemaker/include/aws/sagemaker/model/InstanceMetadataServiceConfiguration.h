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
   * <p>Information on the IMDS configuration of the notebook instance</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InstanceMetadataServiceConfiguration">AWS
   * API Reference</a></p>
   */
  class InstanceMetadataServiceConfiguration
  {
  public:
    AWS_SAGEMAKER_API InstanceMetadataServiceConfiguration() = default;
    AWS_SAGEMAKER_API InstanceMetadataServiceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API InstanceMetadataServiceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the minimum IMDS version that the notebook instance supports. When
     * passed as part of <code>CreateNotebookInstance</code>, if no value is selected,
     * then it defaults to IMDSv1. This means that both IMDSv1 and IMDSv2 are
     * supported. If passed as part of <code>UpdateNotebookInstance</code>, there is no
     * default.</p>
     */
    inline const Aws::String& GetMinimumInstanceMetadataServiceVersion() const { return m_minimumInstanceMetadataServiceVersion; }
    inline bool MinimumInstanceMetadataServiceVersionHasBeenSet() const { return m_minimumInstanceMetadataServiceVersionHasBeenSet; }
    template<typename MinimumInstanceMetadataServiceVersionT = Aws::String>
    void SetMinimumInstanceMetadataServiceVersion(MinimumInstanceMetadataServiceVersionT&& value) { m_minimumInstanceMetadataServiceVersionHasBeenSet = true; m_minimumInstanceMetadataServiceVersion = std::forward<MinimumInstanceMetadataServiceVersionT>(value); }
    template<typename MinimumInstanceMetadataServiceVersionT = Aws::String>
    InstanceMetadataServiceConfiguration& WithMinimumInstanceMetadataServiceVersion(MinimumInstanceMetadataServiceVersionT&& value) { SetMinimumInstanceMetadataServiceVersion(std::forward<MinimumInstanceMetadataServiceVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_minimumInstanceMetadataServiceVersion;
    bool m_minimumInstanceMetadataServiceVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
