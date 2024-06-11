﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
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
namespace RolesAnywhere
{
namespace Model
{

  /**
   * <p>A key-value pair you set that identifies a property of the authenticating
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/InstanceProperty">AWS
   * API Reference</a></p>
   */
  class InstanceProperty
  {
  public:
    AWS_ROLESANYWHERE_API InstanceProperty();
    AWS_ROLESANYWHERE_API InstanceProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROLESANYWHERE_API InstanceProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROLESANYWHERE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether the temporary credential request was successful. </p>
     */
    inline bool GetFailed() const{ return m_failed; }
    inline bool FailedHasBeenSet() const { return m_failedHasBeenSet; }
    inline void SetFailed(bool value) { m_failedHasBeenSet = true; m_failed = value; }
    inline InstanceProperty& WithFailed(bool value) { SetFailed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of instanceProperty objects. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetProperties() const{ return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    inline void SetProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_propertiesHasBeenSet = true; m_properties = value; }
    inline void SetProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }
    inline InstanceProperty& WithProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetProperties(value); return *this;}
    inline InstanceProperty& WithProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetProperties(std::move(value)); return *this;}
    inline InstanceProperty& AddProperties(const Aws::String& key, const Aws::String& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, value); return *this; }
    inline InstanceProperty& AddProperties(Aws::String&& key, const Aws::String& value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), value); return *this; }
    inline InstanceProperty& AddProperties(const Aws::String& key, Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, std::move(value)); return *this; }
    inline InstanceProperty& AddProperties(Aws::String&& key, Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), std::move(value)); return *this; }
    inline InstanceProperty& AddProperties(const char* key, Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, std::move(value)); return *this; }
    inline InstanceProperty& AddProperties(Aws::String&& key, const char* value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), value); return *this; }
    inline InstanceProperty& AddProperties(const char* key, const char* value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ISO-8601 time stamp of when the certificate was last used in a temporary
     * credential request.</p>
     */
    inline const Aws::Utils::DateTime& GetSeenAt() const{ return m_seenAt; }
    inline bool SeenAtHasBeenSet() const { return m_seenAtHasBeenSet; }
    inline void SetSeenAt(const Aws::Utils::DateTime& value) { m_seenAtHasBeenSet = true; m_seenAt = value; }
    inline void SetSeenAt(Aws::Utils::DateTime&& value) { m_seenAtHasBeenSet = true; m_seenAt = std::move(value); }
    inline InstanceProperty& WithSeenAt(const Aws::Utils::DateTime& value) { SetSeenAt(value); return *this;}
    inline InstanceProperty& WithSeenAt(Aws::Utils::DateTime&& value) { SetSeenAt(std::move(value)); return *this;}
    ///@}
  private:

    bool m_failed;
    bool m_failedHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_properties;
    bool m_propertiesHasBeenSet = false;

    Aws::Utils::DateTime m_seenAt;
    bool m_seenAtHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
