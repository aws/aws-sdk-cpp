/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/IntentInputData.h>
#include <aws/qconnect/model/QueryTextInputData.h>
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
    AWS_QCONNECT_API QueryInputData();
    AWS_QCONNECT_API QueryInputData(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API QueryInputData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Input information for the intent.</p>
     */
    inline const IntentInputData& GetIntentInputData() const{ return m_intentInputData; }
    inline bool IntentInputDataHasBeenSet() const { return m_intentInputDataHasBeenSet; }
    inline void SetIntentInputData(const IntentInputData& value) { m_intentInputDataHasBeenSet = true; m_intentInputData = value; }
    inline void SetIntentInputData(IntentInputData&& value) { m_intentInputDataHasBeenSet = true; m_intentInputData = std::move(value); }
    inline QueryInputData& WithIntentInputData(const IntentInputData& value) { SetIntentInputData(value); return *this;}
    inline QueryInputData& WithIntentInputData(IntentInputData&& value) { SetIntentInputData(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input information for the query.</p>
     */
    inline const QueryTextInputData& GetQueryTextInputData() const{ return m_queryTextInputData; }
    inline bool QueryTextInputDataHasBeenSet() const { return m_queryTextInputDataHasBeenSet; }
    inline void SetQueryTextInputData(const QueryTextInputData& value) { m_queryTextInputDataHasBeenSet = true; m_queryTextInputData = value; }
    inline void SetQueryTextInputData(QueryTextInputData&& value) { m_queryTextInputDataHasBeenSet = true; m_queryTextInputData = std::move(value); }
    inline QueryInputData& WithQueryTextInputData(const QueryTextInputData& value) { SetQueryTextInputData(value); return *this;}
    inline QueryInputData& WithQueryTextInputData(QueryTextInputData&& value) { SetQueryTextInputData(std::move(value)); return *this;}
    ///@}
  private:

    IntentInputData m_intentInputData;
    bool m_intentInputDataHasBeenSet = false;

    QueryTextInputData m_queryTextInputData;
    bool m_queryTextInputDataHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
