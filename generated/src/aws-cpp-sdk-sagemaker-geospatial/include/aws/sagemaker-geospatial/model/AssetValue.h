/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
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
namespace SageMakerGeospatial
{
namespace Model
{

  /**
   * <p>The structure containing the asset properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/AssetValue">AWS
   * API Reference</a></p>
   */
  class AssetValue
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API AssetValue() = default;
    AWS_SAGEMAKERGEOSPATIAL_API AssetValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API AssetValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Link to the asset object.</p>
     */
    inline const Aws::String& GetHref() const { return m_href; }
    inline bool HrefHasBeenSet() const { return m_hrefHasBeenSet; }
    template<typename HrefT = Aws::String>
    void SetHref(HrefT&& value) { m_hrefHasBeenSet = true; m_href = std::forward<HrefT>(value); }
    template<typename HrefT = Aws::String>
    AssetValue& WithHref(HrefT&& value) { SetHref(std::forward<HrefT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_href;
    bool m_hrefHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
