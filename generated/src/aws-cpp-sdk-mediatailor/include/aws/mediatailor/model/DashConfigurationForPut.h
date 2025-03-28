﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/OriginManifestType.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>The configuration for DASH PUT operations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DashConfigurationForPut">AWS
   * API Reference</a></p>
   */
  class DashConfigurationForPut
  {
  public:
    AWS_MEDIATAILOR_API DashConfigurationForPut() = default;
    AWS_MEDIATAILOR_API DashConfigurationForPut(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API DashConfigurationForPut& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The setting that controls whether MediaTailor includes the Location tag in
     * DASH manifests. MediaTailor populates the Location tag with the URL for manifest
     * update requests, to be used by players that don't support sticky redirects.
     * Disable this if you have CDN routing rules set up for accessing MediaTailor
     * manifests, and you are either using client-side reporting or your players
     * support sticky HTTP redirects. Valid values are <code>DISABLED</code> and
     * <code>EMT_DEFAULT</code>. The <code>EMT_DEFAULT</code> setting enables the
     * inclusion of the tag and is the default value.</p>
     */
    inline const Aws::String& GetMpdLocation() const { return m_mpdLocation; }
    inline bool MpdLocationHasBeenSet() const { return m_mpdLocationHasBeenSet; }
    template<typename MpdLocationT = Aws::String>
    void SetMpdLocation(MpdLocationT&& value) { m_mpdLocationHasBeenSet = true; m_mpdLocation = std::forward<MpdLocationT>(value); }
    template<typename MpdLocationT = Aws::String>
    DashConfigurationForPut& WithMpdLocation(MpdLocationT&& value) { SetMpdLocation(std::forward<MpdLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The setting that controls whether MediaTailor handles manifests from the
     * origin server as multi-period manifests or single-period manifests. If your
     * origin server produces single-period manifests, set this to
     * <code>SINGLE_PERIOD</code>. The default setting is <code>MULTI_PERIOD</code>.
     * For multi-period manifests, omit this setting or set it to
     * <code>MULTI_PERIOD</code>.</p>
     */
    inline OriginManifestType GetOriginManifestType() const { return m_originManifestType; }
    inline bool OriginManifestTypeHasBeenSet() const { return m_originManifestTypeHasBeenSet; }
    inline void SetOriginManifestType(OriginManifestType value) { m_originManifestTypeHasBeenSet = true; m_originManifestType = value; }
    inline DashConfigurationForPut& WithOriginManifestType(OriginManifestType value) { SetOriginManifestType(value); return *this;}
    ///@}
  private:

    Aws::String m_mpdLocation;
    bool m_mpdLocationHasBeenSet = false;

    OriginManifestType m_originManifestType{OriginManifestType::NOT_SET};
    bool m_originManifestTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
