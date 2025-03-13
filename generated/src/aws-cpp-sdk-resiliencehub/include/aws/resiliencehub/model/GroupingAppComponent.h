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
    AWS_RESILIENCEHUB_API GroupingAppComponent() = default;
    AWS_RESILIENCEHUB_API GroupingAppComponent(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API GroupingAppComponent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the identifier of an AppComponent.</p>
     */
    inline const Aws::String& GetAppComponentId() const { return m_appComponentId; }
    inline bool AppComponentIdHasBeenSet() const { return m_appComponentIdHasBeenSet; }
    template<typename AppComponentIdT = Aws::String>
    void SetAppComponentId(AppComponentIdT&& value) { m_appComponentIdHasBeenSet = true; m_appComponentId = std::forward<AppComponentIdT>(value); }
    template<typename AppComponentIdT = Aws::String>
    GroupingAppComponent& WithAppComponentId(AppComponentIdT&& value) { SetAppComponentId(std::forward<AppComponentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the name of an AppComponent.</p>
     */
    inline const Aws::String& GetAppComponentName() const { return m_appComponentName; }
    inline bool AppComponentNameHasBeenSet() const { return m_appComponentNameHasBeenSet; }
    template<typename AppComponentNameT = Aws::String>
    void SetAppComponentName(AppComponentNameT&& value) { m_appComponentNameHasBeenSet = true; m_appComponentName = std::forward<AppComponentNameT>(value); }
    template<typename AppComponentNameT = Aws::String>
    GroupingAppComponent& WithAppComponentName(AppComponentNameT&& value) { SetAppComponentName(std::forward<AppComponentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the type of an AppComponent.</p>
     */
    inline const Aws::String& GetAppComponentType() const { return m_appComponentType; }
    inline bool AppComponentTypeHasBeenSet() const { return m_appComponentTypeHasBeenSet; }
    template<typename AppComponentTypeT = Aws::String>
    void SetAppComponentType(AppComponentTypeT&& value) { m_appComponentTypeHasBeenSet = true; m_appComponentType = std::forward<AppComponentTypeT>(value); }
    template<typename AppComponentTypeT = Aws::String>
    GroupingAppComponent& WithAppComponentType(AppComponentTypeT&& value) { SetAppComponentType(std::forward<AppComponentTypeT>(value)); return *this;}
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
