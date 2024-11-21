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
    AWS_RESILIENCEHUB_API ListMetricsRequest();

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
    inline const Aws::Vector<Condition>& GetConditions() const{ return m_conditions; }
    inline bool ConditionsHasBeenSet() const { return m_conditionsHasBeenSet; }
    inline void SetConditions(const Aws::Vector<Condition>& value) { m_conditionsHasBeenSet = true; m_conditions = value; }
    inline void SetConditions(Aws::Vector<Condition>&& value) { m_conditionsHasBeenSet = true; m_conditions = std::move(value); }
    inline ListMetricsRequest& WithConditions(const Aws::Vector<Condition>& value) { SetConditions(value); return *this;}
    inline ListMetricsRequest& WithConditions(Aws::Vector<Condition>&& value) { SetConditions(std::move(value)); return *this;}
    inline ListMetricsRequest& AddConditions(const Condition& value) { m_conditionsHasBeenSet = true; m_conditions.push_back(value); return *this; }
    inline ListMetricsRequest& AddConditions(Condition&& value) { m_conditionsHasBeenSet = true; m_conditions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the data source of the metrics.</p>
     */
    inline const Aws::String& GetDataSource() const{ return m_dataSource; }
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
    inline void SetDataSource(const Aws::String& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }
    inline void SetDataSource(Aws::String&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }
    inline void SetDataSource(const char* value) { m_dataSourceHasBeenSet = true; m_dataSource.assign(value); }
    inline ListMetricsRequest& WithDataSource(const Aws::String& value) { SetDataSource(value); return *this;}
    inline ListMetricsRequest& WithDataSource(Aws::String&& value) { SetDataSource(std::move(value)); return *this;}
    inline ListMetricsRequest& WithDataSource(const char* value) { SetDataSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the list of fields in the data source.</p>
     */
    inline const Aws::Vector<Field>& GetFields() const{ return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    inline void SetFields(const Aws::Vector<Field>& value) { m_fieldsHasBeenSet = true; m_fields = value; }
    inline void SetFields(Aws::Vector<Field>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }
    inline ListMetricsRequest& WithFields(const Aws::Vector<Field>& value) { SetFields(value); return *this;}
    inline ListMetricsRequest& WithFields(Aws::Vector<Field>&& value) { SetFields(std::move(value)); return *this;}
    inline ListMetricsRequest& AddFields(const Field& value) { m_fieldsHasBeenSet = true; m_fields.push_back(value); return *this; }
    inline ListMetricsRequest& AddFields(Field&& value) { m_fieldsHasBeenSet = true; m_fields.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Maximum number of results to include in the response. If more results exist
     * than the specified <code>MaxResults</code> value, a token is included in the
     * response so that the remaining results can be retrieved.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListMetricsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Null, or the token from a previous call to get the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListMetricsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListMetricsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListMetricsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) Indicates the order in which you want to sort the fields in the
     * metrics. By default, the fields are sorted in the ascending order.</p>
     */
    inline const Aws::Vector<Sort>& GetSorts() const{ return m_sorts; }
    inline bool SortsHasBeenSet() const { return m_sortsHasBeenSet; }
    inline void SetSorts(const Aws::Vector<Sort>& value) { m_sortsHasBeenSet = true; m_sorts = value; }
    inline void SetSorts(Aws::Vector<Sort>&& value) { m_sortsHasBeenSet = true; m_sorts = std::move(value); }
    inline ListMetricsRequest& WithSorts(const Aws::Vector<Sort>& value) { SetSorts(value); return *this;}
    inline ListMetricsRequest& WithSorts(Aws::Vector<Sort>&& value) { SetSorts(std::move(value)); return *this;}
    inline ListMetricsRequest& AddSorts(const Sort& value) { m_sortsHasBeenSet = true; m_sorts.push_back(value); return *this; }
    inline ListMetricsRequest& AddSorts(Sort&& value) { m_sortsHasBeenSet = true; m_sorts.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Condition> m_conditions;
    bool m_conditionsHasBeenSet = false;

    Aws::String m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    Aws::Vector<Field> m_fields;
    bool m_fieldsHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Sort> m_sorts;
    bool m_sortsHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
