/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/OSType.h>
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
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   * <p>Details about the server in vCenter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/VcenterBasedRemoteInfo">AWS
   * API Reference</a></p>
   */
  class VcenterBasedRemoteInfo
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API VcenterBasedRemoteInfo();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API VcenterBasedRemoteInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API VcenterBasedRemoteInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of the operating system.</p>
     */
    inline const OSType& GetOsType() const{ return m_osType; }

    /**
     * <p>The type of the operating system.</p>
     */
    inline bool OsTypeHasBeenSet() const { return m_osTypeHasBeenSet; }

    /**
     * <p>The type of the operating system.</p>
     */
    inline void SetOsType(const OSType& value) { m_osTypeHasBeenSet = true; m_osType = value; }

    /**
     * <p>The type of the operating system.</p>
     */
    inline void SetOsType(OSType&& value) { m_osTypeHasBeenSet = true; m_osType = std::move(value); }

    /**
     * <p>The type of the operating system.</p>
     */
    inline VcenterBasedRemoteInfo& WithOsType(const OSType& value) { SetOsType(value); return *this;}

    /**
     * <p>The type of the operating system.</p>
     */
    inline VcenterBasedRemoteInfo& WithOsType(OSType&& value) { SetOsType(std::move(value)); return *this;}


    /**
     * <p>The time when the remote server based on vCenter was last configured.</p>
     */
    inline const Aws::String& GetVcenterConfigurationTimeStamp() const{ return m_vcenterConfigurationTimeStamp; }

    /**
     * <p>The time when the remote server based on vCenter was last configured.</p>
     */
    inline bool VcenterConfigurationTimeStampHasBeenSet() const { return m_vcenterConfigurationTimeStampHasBeenSet; }

    /**
     * <p>The time when the remote server based on vCenter was last configured.</p>
     */
    inline void SetVcenterConfigurationTimeStamp(const Aws::String& value) { m_vcenterConfigurationTimeStampHasBeenSet = true; m_vcenterConfigurationTimeStamp = value; }

    /**
     * <p>The time when the remote server based on vCenter was last configured.</p>
     */
    inline void SetVcenterConfigurationTimeStamp(Aws::String&& value) { m_vcenterConfigurationTimeStampHasBeenSet = true; m_vcenterConfigurationTimeStamp = std::move(value); }

    /**
     * <p>The time when the remote server based on vCenter was last configured.</p>
     */
    inline void SetVcenterConfigurationTimeStamp(const char* value) { m_vcenterConfigurationTimeStampHasBeenSet = true; m_vcenterConfigurationTimeStamp.assign(value); }

    /**
     * <p>The time when the remote server based on vCenter was last configured.</p>
     */
    inline VcenterBasedRemoteInfo& WithVcenterConfigurationTimeStamp(const Aws::String& value) { SetVcenterConfigurationTimeStamp(value); return *this;}

    /**
     * <p>The time when the remote server based on vCenter was last configured.</p>
     */
    inline VcenterBasedRemoteInfo& WithVcenterConfigurationTimeStamp(Aws::String&& value) { SetVcenterConfigurationTimeStamp(std::move(value)); return *this;}

    /**
     * <p>The time when the remote server based on vCenter was last configured.</p>
     */
    inline VcenterBasedRemoteInfo& WithVcenterConfigurationTimeStamp(const char* value) { SetVcenterConfigurationTimeStamp(value); return *this;}

  private:

    OSType m_osType;
    bool m_osTypeHasBeenSet = false;

    Aws::String m_vcenterConfigurationTimeStamp;
    bool m_vcenterConfigurationTimeStampHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
