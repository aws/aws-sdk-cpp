/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/VectorConfig.h>
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
   * <p>Configuration for your collection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CollectionConfig">AWS
   * API Reference</a></p>
   */
  class CollectionConfig
  {
  public:
    AWS_SAGEMAKER_API CollectionConfig();
    AWS_SAGEMAKER_API CollectionConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CollectionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Configuration for your vector collection type.</p> <ul> <li> <p>
     * <code>Dimension</code>: The number of elements in your vector.</p> </li> </ul>
     */
    inline const VectorConfig& GetVectorConfig() const{ return m_vectorConfig; }

    /**
     * <p>Configuration for your vector collection type.</p> <ul> <li> <p>
     * <code>Dimension</code>: The number of elements in your vector.</p> </li> </ul>
     */
    inline bool VectorConfigHasBeenSet() const { return m_vectorConfigHasBeenSet; }

    /**
     * <p>Configuration for your vector collection type.</p> <ul> <li> <p>
     * <code>Dimension</code>: The number of elements in your vector.</p> </li> </ul>
     */
    inline void SetVectorConfig(const VectorConfig& value) { m_vectorConfigHasBeenSet = true; m_vectorConfig = value; }

    /**
     * <p>Configuration for your vector collection type.</p> <ul> <li> <p>
     * <code>Dimension</code>: The number of elements in your vector.</p> </li> </ul>
     */
    inline void SetVectorConfig(VectorConfig&& value) { m_vectorConfigHasBeenSet = true; m_vectorConfig = std::move(value); }

    /**
     * <p>Configuration for your vector collection type.</p> <ul> <li> <p>
     * <code>Dimension</code>: The number of elements in your vector.</p> </li> </ul>
     */
    inline CollectionConfig& WithVectorConfig(const VectorConfig& value) { SetVectorConfig(value); return *this;}

    /**
     * <p>Configuration for your vector collection type.</p> <ul> <li> <p>
     * <code>Dimension</code>: The number of elements in your vector.</p> </li> </ul>
     */
    inline CollectionConfig& WithVectorConfig(VectorConfig&& value) { SetVectorConfig(std::move(value)); return *this;}

  private:

    VectorConfig m_vectorConfig;
    bool m_vectorConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
