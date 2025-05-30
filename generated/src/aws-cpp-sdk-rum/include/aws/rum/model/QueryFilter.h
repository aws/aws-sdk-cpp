﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
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
namespace CloudWatchRUM
{
namespace Model
{

  /**
   * <p>A structure that defines a key and values that you can use to filter the
   * results. The only performance events that are returned are those that have
   * values matching the ones that you specify in one of your
   * <code>QueryFilter</code> structures.</p> <p>For example, you could specify
   * <code>Browser</code> as the <code>Name</code> and specify
   * <code>Chrome,Firefox</code> as the <code>Values</code> to return events
   * generated only from those browsers.</p> <p>Specifying <code>Invert</code> as the
   * <code>Name</code> works as a "not equal to" filter. For example, specify
   * <code>Invert</code> as the <code>Name</code> and specify <code>Chrome</code> as
   * the value to return all events except events from user sessions with the Chrome
   * browser.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/QueryFilter">AWS API
   * Reference</a></p>
   */
  class QueryFilter
  {
  public:
    AWS_CLOUDWATCHRUM_API QueryFilter() = default;
    AWS_CLOUDWATCHRUM_API QueryFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHRUM_API QueryFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHRUM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a key to search for. The filter returns only the events that
     * match the <code>Name</code> and <code>Values</code> that you specify. </p>
     * <p>Valid values for <code>Name</code> are <code>Browser</code> |
     * <code>Device</code> | <code>Country</code> | <code>Page</code> | <code>OS</code>
     * | <code>EventType</code> | <code>Invert</code> </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    QueryFilter& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values of the <code>Name</code> that are to be be included in the
     * returned results.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    QueryFilter& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    QueryFilter& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
