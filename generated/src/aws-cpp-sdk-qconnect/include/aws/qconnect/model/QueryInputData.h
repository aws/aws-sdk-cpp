/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/QueryTextInputData.h>
#include <aws/qconnect/model/IntentInputData.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>Input information for the query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/QueryInputData">AWS
   * API Reference</a></p>
   */
  class QueryInputData
  {
  public:
    AWS_QCONNECT_API QueryInputData() = default;
    AWS_QCONNECT_API QueryInputData(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API QueryInputData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Input information for the query.</p>
     */
    inline const QueryTextInputData& GetQueryTextInputData() const { return m_queryTextInputData; }
    inline bool QueryTextInputDataHasBeenSet() const { return m_queryTextInputDataHasBeenSet; }
    template<typename QueryTextInputDataT = QueryTextInputData>
    void SetQueryTextInputData(QueryTextInputDataT&& value) { m_queryTextInputDataHasBeenSet = true; m_queryTextInputData = std::forward<QueryTextInputDataT>(value); }
    template<typename QueryTextInputDataT = QueryTextInputData>
    QueryInputData& WithQueryTextInputData(QueryTextInputDataT&& value) { SetQueryTextInputData(std::forward<QueryTextInputDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input information for the intent.</p>
     */
    inline const IntentInputData& GetIntentInputData() const { return m_intentInputData; }
    inline bool IntentInputDataHasBeenSet() const { return m_intentInputDataHasBeenSet; }
    template<typename IntentInputDataT = IntentInputData>
    void SetIntentInputData(IntentInputDataT&& value) { m_intentInputDataHasBeenSet = true; m_intentInputData = std::forward<IntentInputDataT>(value); }
    template<typename IntentInputDataT = IntentInputData>
    QueryInputData& WithIntentInputData(IntentInputDataT&& value) { SetIntentInputData(std::forward<IntentInputDataT>(value)); return *this;}
    ///@}
  private:

    QueryTextInputData m_queryTextInputData;
    bool m_queryTextInputDataHasBeenSet = false;

    IntentInputData m_intentInputData;
    bool m_intentInputDataHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
