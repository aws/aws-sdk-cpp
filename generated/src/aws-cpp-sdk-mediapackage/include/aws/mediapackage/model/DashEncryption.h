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
   * A Dynamic Adaptive Streaming over HTTP (DASH) encryption
   * configuration.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/DashEncryption">AWS
   * API Reference</a></p>
   */
  class DashEncryption
  {
  public:
    AWS_MEDIAPACKAGE_API DashEncryption();
    AWS_MEDIAPACKAGE_API DashEncryption(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API DashEncryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Time (in seconds) between each encryption key rotation.
     */
    inline int GetKeyRotationIntervalSeconds() const{ return m_keyRotationIntervalSeconds; }

    /**
     * Time (in seconds) between each encryption key rotation.
     */
    inline bool KeyRotationIntervalSecondsHasBeenSet() const { return m_keyRotationIntervalSecondsHasBeenSet; }

    /**
     * Time (in seconds) between each encryption key rotation.
     */
    inline void SetKeyRotationIntervalSeconds(int value) { m_keyRotationIntervalSecondsHasBeenSet = true; m_keyRotationIntervalSeconds = value; }

    /**
     * Time (in seconds) between each encryption key rotation.
     */
    inline DashEncryption& WithKeyRotationIntervalSeconds(int value) { SetKeyRotationIntervalSeconds(value); return *this;}


    
    inline const SpekeKeyProvider& GetSpekeKeyProvider() const{ return m_spekeKeyProvider; }

    
    inline bool SpekeKeyProviderHasBeenSet() const { return m_spekeKeyProviderHasBeenSet; }

    
    inline void SetSpekeKeyProvider(const SpekeKeyProvider& value) { m_spekeKeyProviderHasBeenSet = true; m_spekeKeyProvider = value; }

    
    inline void SetSpekeKeyProvider(SpekeKeyProvider&& value) { m_spekeKeyProviderHasBeenSet = true; m_spekeKeyProvider = std::move(value); }

    
    inline DashEncryption& WithSpekeKeyProvider(const SpekeKeyProvider& value) { SetSpekeKeyProvider(value); return *this;}

    
    inline DashEncryption& WithSpekeKeyProvider(SpekeKeyProvider&& value) { SetSpekeKeyProvider(std::move(value)); return *this;}

  private:

    int m_keyRotationIntervalSeconds;
    bool m_keyRotationIntervalSecondsHasBeenSet = false;

    SpekeKeyProvider m_spekeKeyProvider;
    bool m_spekeKeyProviderHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
