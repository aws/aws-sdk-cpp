﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>A filter used to limit results when describing inbound or outbound
   * cross-cluster connections. You can specify multiple values per filter. A
   * cross-cluster connection must match at least one of the specified values for it
   * to be returned from an operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/Filter">AWS
   * API Reference</a></p>
   */
  class Filter
  {
  public:
    AWS_OPENSEARCHSERVICE_API Filter() = default;
    AWS_OPENSEARCHSERVICE_API Filter(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the filter.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Filter& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more values for the filter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    Filter& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    Filter& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
