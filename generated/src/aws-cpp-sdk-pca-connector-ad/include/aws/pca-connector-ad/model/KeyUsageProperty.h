/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/pca-connector-ad/model/KeyUsagePropertyFlags.h>
#include <aws/pca-connector-ad/model/KeyUsagePropertyType.h>
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
namespace PcaConnectorAd
{
namespace Model
{

  /**
   * <p>The key usage property defines the purpose of the private key contained in
   * the certificate. You can specify specific purposes using property flags or all
   * by using property type ALL.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/KeyUsageProperty">AWS
   * API Reference</a></p>
   */
  class KeyUsageProperty
  {
  public:
    AWS_PCACONNECTORAD_API KeyUsageProperty() = default;
    AWS_PCACONNECTORAD_API KeyUsageProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API KeyUsageProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>You can specify key usage for encryption, key agreement, and signature. You
     * can use property flags or property type but not both. </p>
     */
    inline const KeyUsagePropertyFlags& GetPropertyFlags() const { return m_propertyFlags; }
    inline bool PropertyFlagsHasBeenSet() const { return m_propertyFlagsHasBeenSet; }
    template<typename PropertyFlagsT = KeyUsagePropertyFlags>
    void SetPropertyFlags(PropertyFlagsT&& value) { m_propertyFlagsHasBeenSet = true; m_propertyFlags = std::forward<PropertyFlagsT>(value); }
    template<typename PropertyFlagsT = KeyUsagePropertyFlags>
    KeyUsageProperty& WithPropertyFlags(PropertyFlagsT&& value) { SetPropertyFlags(std::forward<PropertyFlagsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can specify all key usages using property type ALL. You can use property
     * type or property flags but not both. </p>
     */
    inline KeyUsagePropertyType GetPropertyType() const { return m_propertyType; }
    inline bool PropertyTypeHasBeenSet() const { return m_propertyTypeHasBeenSet; }
    inline void SetPropertyType(KeyUsagePropertyType value) { m_propertyTypeHasBeenSet = true; m_propertyType = value; }
    inline KeyUsageProperty& WithPropertyType(KeyUsagePropertyType value) { SetPropertyType(value); return *this;}
    ///@}
  private:

    KeyUsagePropertyFlags m_propertyFlags;
    bool m_propertyFlagsHasBeenSet = false;

    KeyUsagePropertyType m_propertyType{KeyUsagePropertyType::NOT_SET};
    bool m_propertyTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
