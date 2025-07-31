/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/model/Unit.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces-web/model/Event.h>
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
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   * <p>The filter that specifies the events to monitor.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/EventFilter">AWS
   * API Reference</a></p>
   */
  class EventFilter
  {
  public:
    AWS_WORKSPACESWEB_API EventFilter() = default;
    AWS_WORKSPACESWEB_API EventFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API EventFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The filter that monitors all of the available events, including any new
     * events emitted in the future.</p>
     */
    inline const Unit& GetAll() const { return m_all; }
    inline bool AllHasBeenSet() const { return m_allHasBeenSet; }
    template<typename AllT = Unit>
    void SetAll(AllT&& value) { m_allHasBeenSet = true; m_all = std::forward<AllT>(value); }
    template<typename AllT = Unit>
    EventFilter& WithAll(AllT&& value) { SetAll(std::forward<AllT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter that monitors only the listed set of events. New events are not
     * auto-monitored.</p>
     */
    inline const Aws::Vector<Event>& GetInclude() const { return m_include; }
    inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }
    template<typename IncludeT = Aws::Vector<Event>>
    void SetInclude(IncludeT&& value) { m_includeHasBeenSet = true; m_include = std::forward<IncludeT>(value); }
    template<typename IncludeT = Aws::Vector<Event>>
    EventFilter& WithInclude(IncludeT&& value) { SetInclude(std::forward<IncludeT>(value)); return *this;}
    inline EventFilter& AddInclude(Event value) { m_includeHasBeenSet = true; m_include.push_back(value); return *this; }
    ///@}
  private:

    Unit m_all;
    bool m_allHasBeenSet = false;

    Aws::Vector<Event> m_include;
    bool m_includeHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
