/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/ResilienceHubRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/Condition.h>
#include <aws/resiliencehub/model/Field.h>
#include <aws/resiliencehub/model/Sort.h>
#include <utility>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

  /**
   */
  class ListMetricsRequest : public ResilienceHubRequest
  {
  public:
    AWS_RESILIENCEHUB_API ListMetricsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMetrics"; }

    AWS_RESILIENCEHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Indicates the list of all the conditions that were applied on the
     * metrics.</p>
     */
    inline const Aws::Vector<Condition>& GetConditions() const { return m_conditions; }
    inline bool ConditionsHasBeenSet() const { return m_conditionsHasBeenSet; }
    template<typename ConditionsT = Aws::Vector<Condition>>
    void SetConditions(ConditionsT&& value) { m_conditionsHasBeenSet = true; m_conditions = std::forward<ConditionsT>(value); }
    template<typename ConditionsT = Aws::Vector<Condition>>
    ListMetricsRequest& WithConditions(ConditionsT&& value) { SetConditions(std::forward<ConditionsT>(value)); return *this;}
    template<typename ConditionsT = Condition>
    ListMetricsRequest& AddConditions(ConditionsT&& value) { m_conditionsHasBeenSet = true; m_conditions.emplace_back(std::forward<ConditionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the data source of the metrics.</p>
     */
    inline const Aws::String& GetDataSource() const { return m_dataSource; }
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
    template<typename DataSourceT = Aws::String>
    void SetDataSource(DataSourceT&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::forward<DataSourceT>(value); }
    template<typename DataSourceT = Aws::String>
    ListMetricsRequest& WithDataSource(DataSourceT&& value) { SetDataSource(std::forward<DataSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the list of fields in the data source.</p>
     */
    inline const Aws::Vector<Field>& GetFields() const { return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    template<typename FieldsT = Aws::Vector<Field>>
    void SetFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields = std::forward<FieldsT>(value); }
    template<typename FieldsT = Aws::Vector<Field>>
    ListMetricsRequest& WithFields(FieldsT&& value) { SetFields(std::forward<FieldsT>(value)); return *this;}
    template<typename FieldsT = Field>
    ListMetricsRequest& AddFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields.emplace_back(std::forward<FieldsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Maximum number of results to include in the response. If more results exist
     * than the specified <code>MaxResults</code> value, a token is included in the
     * response so that the remaining results can be retrieved.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListMetricsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Null, or the token from a previous call to get the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMetricsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) Indicates the order in which you want to sort the fields in the
     * metrics. By default, the fields are sorted in the ascending order.</p>
     */
    inline const Aws::Vector<Sort>& GetSorts() const { return m_sorts; }
    inline bool SortsHasBeenSet() const { return m_sortsHasBeenSet; }
    template<typename SortsT = Aws::Vector<Sort>>
    void SetSorts(SortsT&& value) { m_sortsHasBeenSet = true; m_sorts = std::forward<SortsT>(value); }
    template<typename SortsT = Aws::Vector<Sort>>
    ListMetricsRequest& WithSorts(SortsT&& value) { SetSorts(std::forward<SortsT>(value)); return *this;}
    template<typename SortsT = Sort>
    ListMetricsRequest& AddSorts(SortsT&& value) { m_sortsHasBeenSet = true; m_sorts.emplace_back(std::forward<SortsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Condition> m_conditions;
    bool m_conditionsHasBeenSet = false;

    Aws::String m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    Aws::Vector<Field> m_fields;
    bool m_fieldsHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Sort> m_sorts;
    bool m_sortsHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
