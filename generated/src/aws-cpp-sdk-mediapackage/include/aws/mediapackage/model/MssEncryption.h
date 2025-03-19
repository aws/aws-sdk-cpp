/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/mediapackage/model/SpekeKeyProvider.h>
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
namespace MediaPackage
{
namespace Model
{

  /**
   * A Microsoft Smooth Streaming (MSS) encryption configuration.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/MssEncryption">AWS
   * API Reference</a></p>
   */
  class MssEncryption
  {
  public:
    AWS_MEDIAPACKAGE_API MssEncryption() = default;
    AWS_MEDIAPACKAGE_API MssEncryption(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API MssEncryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const SpekeKeyProvider& GetSpekeKeyProvider() const { return m_spekeKeyProvider; }
    inline bool SpekeKeyProviderHasBeenSet() const { return m_spekeKeyProviderHasBeenSet; }
    template<typename SpekeKeyProviderT = SpekeKeyProvider>
    void SetSpekeKeyProvider(SpekeKeyProviderT&& value) { m_spekeKeyProviderHasBeenSet = true; m_spekeKeyProvider = std::forward<SpekeKeyProviderT>(value); }
    template<typename SpekeKeyProviderT = SpekeKeyProvider>
    MssEncryption& WithSpekeKeyProvider(SpekeKeyProviderT&& value) { SetSpekeKeyProvider(std::forward<SpekeKeyProviderT>(value)); return *this;}
    ///@}
  private:

    SpekeKeyProvider m_spekeKeyProvider;
    bool m_spekeKeyProviderHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
