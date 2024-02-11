/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>Defines an Application Component.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/AppComponent">AWS
   * API Reference</a></p>
   */
  class AppComponent
  {
  public:
    AWS_RESILIENCEHUB_API AppComponent();
    AWS_RESILIENCEHUB_API AppComponent(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API AppComponent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Additional configuration parameters for an Resilience Hub application. If you
     * want to implement <code>additionalInfo</code> through the Resilience Hub console
     * rather than using an API call, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/app-config-param.html">Configure
     * the application configuration parameters</a>.</p>  <p>Currently, this
     * parameter accepts a key-value mapping (in a string format) of only one failover
     * region and one associated account.</p> <p>Key: <code>"failover-regions"</code>
     * </p> <p>Value: <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p> 
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetAdditionalInfo() const{ return m_additionalInfo; }

    /**
     * <p>Additional configuration parameters for an Resilience Hub application. If you
     * want to implement <code>additionalInfo</code> through the Resilience Hub console
     * rather than using an API call, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/app-config-param.html">Configure
     * the application configuration parameters</a>.</p>  <p>Currently, this
     * parameter accepts a key-value mapping (in a string format) of only one failover
     * region and one associated account.</p> <p>Key: <code>"failover-regions"</code>
     * </p> <p>Value: <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p> 
     */
    inline bool AdditionalInfoHasBeenSet() const { return m_additionalInfoHasBeenSet; }

    /**
     * <p>Additional configuration parameters for an Resilience Hub application. If you
     * want to implement <code>additionalInfo</code> through the Resilience Hub console
     * rather than using an API call, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/app-config-param.html">Configure
     * the application configuration parameters</a>.</p>  <p>Currently, this
     * parameter accepts a key-value mapping (in a string format) of only one failover
     * region and one associated account.</p> <p>Key: <code>"failover-regions"</code>
     * </p> <p>Value: <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p> 
     */
    inline void SetAdditionalInfo(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = value; }

    /**
     * <p>Additional configuration parameters for an Resilience Hub application. If you
     * want to implement <code>additionalInfo</code> through the Resilience Hub console
     * rather than using an API call, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/app-config-param.html">Configure
     * the application configuration parameters</a>.</p>  <p>Currently, this
     * parameter accepts a key-value mapping (in a string format) of only one failover
     * region and one associated account.</p> <p>Key: <code>"failover-regions"</code>
     * </p> <p>Value: <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p> 
     */
    inline void SetAdditionalInfo(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = std::move(value); }

    /**
     * <p>Additional configuration parameters for an Resilience Hub application. If you
     * want to implement <code>additionalInfo</code> through the Resilience Hub console
     * rather than using an API call, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/app-config-param.html">Configure
     * the application configuration parameters</a>.</p>  <p>Currently, this
     * parameter accepts a key-value mapping (in a string format) of only one failover
     * region and one associated account.</p> <p>Key: <code>"failover-regions"</code>
     * </p> <p>Value: <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p> 
     */
    inline AppComponent& WithAdditionalInfo(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetAdditionalInfo(value); return *this;}

    /**
     * <p>Additional configuration parameters for an Resilience Hub application. If you
     * want to implement <code>additionalInfo</code> through the Resilience Hub console
     * rather than using an API call, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/app-config-param.html">Configure
     * the application configuration parameters</a>.</p>  <p>Currently, this
     * parameter accepts a key-value mapping (in a string format) of only one failover
     * region and one associated account.</p> <p>Key: <code>"failover-regions"</code>
     * </p> <p>Value: <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p> 
     */
    inline AppComponent& WithAdditionalInfo(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetAdditionalInfo(std::move(value)); return *this;}

    /**
     * <p>Additional configuration parameters for an Resilience Hub application. If you
     * want to implement <code>additionalInfo</code> through the Resilience Hub console
     * rather than using an API call, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/app-config-param.html">Configure
     * the application configuration parameters</a>.</p>  <p>Currently, this
     * parameter accepts a key-value mapping (in a string format) of only one failover
     * region and one associated account.</p> <p>Key: <code>"failover-regions"</code>
     * </p> <p>Value: <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p> 
     */
    inline AppComponent& AddAdditionalInfo(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo.emplace(key, value); return *this; }

    /**
     * <p>Additional configuration parameters for an Resilience Hub application. If you
     * want to implement <code>additionalInfo</code> through the Resilience Hub console
     * rather than using an API call, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/app-config-param.html">Configure
     * the application configuration parameters</a>.</p>  <p>Currently, this
     * parameter accepts a key-value mapping (in a string format) of only one failover
     * region and one associated account.</p> <p>Key: <code>"failover-regions"</code>
     * </p> <p>Value: <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p> 
     */
    inline AppComponent& AddAdditionalInfo(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo.emplace(std::move(key), value); return *this; }

    /**
     * <p>Additional configuration parameters for an Resilience Hub application. If you
     * want to implement <code>additionalInfo</code> through the Resilience Hub console
     * rather than using an API call, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/app-config-param.html">Configure
     * the application configuration parameters</a>.</p>  <p>Currently, this
     * parameter accepts a key-value mapping (in a string format) of only one failover
     * region and one associated account.</p> <p>Key: <code>"failover-regions"</code>
     * </p> <p>Value: <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p> 
     */
    inline AppComponent& AddAdditionalInfo(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Additional configuration parameters for an Resilience Hub application. If you
     * want to implement <code>additionalInfo</code> through the Resilience Hub console
     * rather than using an API call, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/app-config-param.html">Configure
     * the application configuration parameters</a>.</p>  <p>Currently, this
     * parameter accepts a key-value mapping (in a string format) of only one failover
     * region and one associated account.</p> <p>Key: <code>"failover-regions"</code>
     * </p> <p>Value: <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p> 
     */
    inline AppComponent& AddAdditionalInfo(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Additional configuration parameters for an Resilience Hub application. If you
     * want to implement <code>additionalInfo</code> through the Resilience Hub console
     * rather than using an API call, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/app-config-param.html">Configure
     * the application configuration parameters</a>.</p>  <p>Currently, this
     * parameter accepts a key-value mapping (in a string format) of only one failover
     * region and one associated account.</p> <p>Key: <code>"failover-regions"</code>
     * </p> <p>Value: <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p> 
     */
    inline AppComponent& AddAdditionalInfo(const char* key, Aws::Vector<Aws::String>&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Additional configuration parameters for an Resilience Hub application. If you
     * want to implement <code>additionalInfo</code> through the Resilience Hub console
     * rather than using an API call, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/app-config-param.html">Configure
     * the application configuration parameters</a>.</p>  <p>Currently, this
     * parameter accepts a key-value mapping (in a string format) of only one failover
     * region and one associated account.</p> <p>Key: <code>"failover-regions"</code>
     * </p> <p>Value: <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p> 
     */
    inline AppComponent& AddAdditionalInfo(const char* key, const Aws::Vector<Aws::String>& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo.emplace(key, value); return *this; }


    /**
     * <p>Identifier of the Application Component.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>Identifier of the Application Component.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>Identifier of the Application Component.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>Identifier of the Application Component.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>Identifier of the Application Component.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>Identifier of the Application Component.</p>
     */
    inline AppComponent& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>Identifier of the Application Component.</p>
     */
    inline AppComponent& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>Identifier of the Application Component.</p>
     */
    inline AppComponent& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Name of the Application Component.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of the Application Component.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name of the Application Component.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the Application Component.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of the Application Component.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of the Application Component.</p>
     */
    inline AppComponent& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of the Application Component.</p>
     */
    inline AppComponent& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of the Application Component.</p>
     */
    inline AppComponent& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of Application Component.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of Application Component.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of Application Component.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of Application Component.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of Application Component.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of Application Component.</p>
     */
    inline AppComponent& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of Application Component.</p>
     */
    inline AppComponent& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of Application Component.</p>
     */
    inline AppComponent& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_additionalInfo;
    bool m_additionalInfoHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
