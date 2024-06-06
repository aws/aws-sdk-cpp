/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/model/AutomaticUpdatePolicy.h>
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
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>A set of variables indicating the software update preferences for the
   * gateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/SoftwareUpdatePreferences">AWS
   * API Reference</a></p>
   */
  class SoftwareUpdatePreferences
  {
  public:
    AWS_STORAGEGATEWAY_API SoftwareUpdatePreferences();
    AWS_STORAGEGATEWAY_API SoftwareUpdatePreferences(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API SoftwareUpdatePreferences& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates the automatic update policy for a gateway.</p> <p>
     * <code>ALL_VERSIONS</code> - Enables regular gateway maintenance updates.</p> <p>
     * <code>EMERGENCY_VERSIONS_ONLY</code> - Disables regular gateway maintenance
     * updates.</p>
     */
    inline const AutomaticUpdatePolicy& GetAutomaticUpdatePolicy() const{ return m_automaticUpdatePolicy; }

    /**
     * <p>Indicates the automatic update policy for a gateway.</p> <p>
     * <code>ALL_VERSIONS</code> - Enables regular gateway maintenance updates.</p> <p>
     * <code>EMERGENCY_VERSIONS_ONLY</code> - Disables regular gateway maintenance
     * updates.</p>
     */
    inline bool AutomaticUpdatePolicyHasBeenSet() const { return m_automaticUpdatePolicyHasBeenSet; }

    /**
     * <p>Indicates the automatic update policy for a gateway.</p> <p>
     * <code>ALL_VERSIONS</code> - Enables regular gateway maintenance updates.</p> <p>
     * <code>EMERGENCY_VERSIONS_ONLY</code> - Disables regular gateway maintenance
     * updates.</p>
     */
    inline void SetAutomaticUpdatePolicy(const AutomaticUpdatePolicy& value) { m_automaticUpdatePolicyHasBeenSet = true; m_automaticUpdatePolicy = value; }

    /**
     * <p>Indicates the automatic update policy for a gateway.</p> <p>
     * <code>ALL_VERSIONS</code> - Enables regular gateway maintenance updates.</p> <p>
     * <code>EMERGENCY_VERSIONS_ONLY</code> - Disables regular gateway maintenance
     * updates.</p>
     */
    inline void SetAutomaticUpdatePolicy(AutomaticUpdatePolicy&& value) { m_automaticUpdatePolicyHasBeenSet = true; m_automaticUpdatePolicy = std::move(value); }

    /**
     * <p>Indicates the automatic update policy for a gateway.</p> <p>
     * <code>ALL_VERSIONS</code> - Enables regular gateway maintenance updates.</p> <p>
     * <code>EMERGENCY_VERSIONS_ONLY</code> - Disables regular gateway maintenance
     * updates.</p>
     */
    inline SoftwareUpdatePreferences& WithAutomaticUpdatePolicy(const AutomaticUpdatePolicy& value) { SetAutomaticUpdatePolicy(value); return *this;}

    /**
     * <p>Indicates the automatic update policy for a gateway.</p> <p>
     * <code>ALL_VERSIONS</code> - Enables regular gateway maintenance updates.</p> <p>
     * <code>EMERGENCY_VERSIONS_ONLY</code> - Disables regular gateway maintenance
     * updates.</p>
     */
    inline SoftwareUpdatePreferences& WithAutomaticUpdatePolicy(AutomaticUpdatePolicy&& value) { SetAutomaticUpdatePolicy(std::move(value)); return *this;}

  private:

    AutomaticUpdatePolicy m_automaticUpdatePolicy;
    bool m_automaticUpdatePolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
