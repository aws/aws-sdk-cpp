/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>Creates a new recommended Application Component (AppComponent).</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/GroupingAppComponent">AWS
   * API Reference</a></p>
   */
  class GroupingAppComponent
  {
  public:
    AWS_RESILIENCEHUB_API GroupingAppComponent();
    AWS_RESILIENCEHUB_API GroupingAppComponent(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API GroupingAppComponent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the identifier of an AppComponent.</p>
     */
    inline const Aws::String& GetAppComponentId() const{ return m_appComponentId; }
    inline bool AppComponentIdHasBeenSet() const { return m_appComponentIdHasBeenSet; }
    inline void SetAppComponentId(const Aws::String& value) { m_appComponentIdHasBeenSet = true; m_appComponentId = value; }
    inline void SetAppComponentId(Aws::String&& value) { m_appComponentIdHasBeenSet = true; m_appComponentId = std::move(value); }
    inline void SetAppComponentId(const char* value) { m_appComponentIdHasBeenSet = true; m_appComponentId.assign(value); }
    inline GroupingAppComponent& WithAppComponentId(const Aws::String& value) { SetAppComponentId(value); return *this;}
    inline GroupingAppComponent& WithAppComponentId(Aws::String&& value) { SetAppComponentId(std::move(value)); return *this;}
    inline GroupingAppComponent& WithAppComponentId(const char* value) { SetAppComponentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the name of an AppComponent.</p>
     */
    inline const Aws::String& GetAppComponentName() const{ return m_appComponentName; }
    inline bool AppComponentNameHasBeenSet() const { return m_appComponentNameHasBeenSet; }
    inline void SetAppComponentName(const Aws::String& value) { m_appComponentNameHasBeenSet = true; m_appComponentName = value; }
    inline void SetAppComponentName(Aws::String&& value) { m_appComponentNameHasBeenSet = true; m_appComponentName = std::move(value); }
    inline void SetAppComponentName(const char* value) { m_appComponentNameHasBeenSet = true; m_appComponentName.assign(value); }
    inline GroupingAppComponent& WithAppComponentName(const Aws::String& value) { SetAppComponentName(value); return *this;}
    inline GroupingAppComponent& WithAppComponentName(Aws::String&& value) { SetAppComponentName(std::move(value)); return *this;}
    inline GroupingAppComponent& WithAppComponentName(const char* value) { SetAppComponentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the type of an AppComponent.</p>
     */
    inline const Aws::String& GetAppComponentType() const{ return m_appComponentType; }
    inline bool AppComponentTypeHasBeenSet() const { return m_appComponentTypeHasBeenSet; }
    inline void SetAppComponentType(const Aws::String& value) { m_appComponentTypeHasBeenSet = true; m_appComponentType = value; }
    inline void SetAppComponentType(Aws::String&& value) { m_appComponentTypeHasBeenSet = true; m_appComponentType = std::move(value); }
    inline void SetAppComponentType(const char* value) { m_appComponentTypeHasBeenSet = true; m_appComponentType.assign(value); }
    inline GroupingAppComponent& WithAppComponentType(const Aws::String& value) { SetAppComponentType(value); return *this;}
    inline GroupingAppComponent& WithAppComponentType(Aws::String&& value) { SetAppComponentType(std::move(value)); return *this;}
    inline GroupingAppComponent& WithAppComponentType(const char* value) { SetAppComponentType(value); return *this;}
    ///@}
  private:

    Aws::String m_appComponentId;
    bool m_appComponentIdHasBeenSet = false;

    Aws::String m_appComponentName;
    bool m_appComponentNameHasBeenSet = false;

    Aws::String m_appComponentType;
    bool m_appComponentTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
