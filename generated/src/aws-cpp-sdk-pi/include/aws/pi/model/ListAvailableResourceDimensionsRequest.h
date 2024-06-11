/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/pi/PIRequest.h>
#include <aws/pi/model/ServiceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pi/model/FineGrainedAction.h>
#include <utility>

namespace Aws
{
namespace PI
{
namespace Model
{

  /**
   */
  class ListAvailableResourceDimensionsRequest : public PIRequest
  {
  public:
    AWS_PI_API ListAvailableResourceDimensionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAvailableResourceDimensions"; }

    AWS_PI_API Aws::String SerializePayload() const override;

    AWS_PI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Web Services service for which Performance Insights returns
     * metrics.</p>
     */
    inline const ServiceType& GetServiceType() const{ return m_serviceType; }
    inline bool ServiceTypeHasBeenSet() const { return m_serviceTypeHasBeenSet; }
    inline void SetServiceType(const ServiceType& value) { m_serviceTypeHasBeenSet = true; m_serviceType = value; }
    inline void SetServiceType(ServiceType&& value) { m_serviceTypeHasBeenSet = true; m_serviceType = std::move(value); }
    inline ListAvailableResourceDimensionsRequest& WithServiceType(const ServiceType& value) { SetServiceType(value); return *this;}
    inline ListAvailableResourceDimensionsRequest& WithServiceType(ServiceType&& value) { SetServiceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An immutable identifier for a data source that is unique within an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. To
     * use an Amazon RDS DB instance as a data source, specify its
     * <code>DbiResourceId</code> value. For example, specify
     * <code>db-ABCDEFGHIJKLMNOPQRSTU1VWZ</code>. </p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline ListAvailableResourceDimensionsRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline ListAvailableResourceDimensionsRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline ListAvailableResourceDimensionsRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The types of metrics for which to retrieve dimensions. Valid values include
     * <code>db.load</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMetrics() const{ return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    inline void SetMetrics(const Aws::Vector<Aws::String>& value) { m_metricsHasBeenSet = true; m_metrics = value; }
    inline void SetMetrics(Aws::Vector<Aws::String>&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }
    inline ListAvailableResourceDimensionsRequest& WithMetrics(const Aws::Vector<Aws::String>& value) { SetMetrics(value); return *this;}
    inline ListAvailableResourceDimensionsRequest& WithMetrics(Aws::Vector<Aws::String>&& value) { SetMetrics(std::move(value)); return *this;}
    inline ListAvailableResourceDimensionsRequest& AddMetrics(const Aws::String& value) { m_metricsHasBeenSet = true; m_metrics.push_back(value); return *this; }
    inline ListAvailableResourceDimensionsRequest& AddMetrics(Aws::String&& value) { m_metricsHasBeenSet = true; m_metrics.push_back(std::move(value)); return *this; }
    inline ListAvailableResourceDimensionsRequest& AddMetrics(const char* value) { m_metricsHasBeenSet = true; m_metrics.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return in the response. If more items exist
     * than the specified <code>MaxRecords</code> value, a pagination token is included
     * in the response so that the remaining results can be retrieved.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAvailableResourceDimensionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListAvailableResourceDimensionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAvailableResourceDimensionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAvailableResourceDimensionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actions to discover the dimensions you are authorized to access. If you
     * specify multiple actions, then the response will contain the dimensions common
     * for all the actions.</p> <p>When you don't specify this request parameter or
     * provide an empty list, the response contains all the available dimensions for
     * the target database engine whether or not you are authorized to access them.</p>
     */
    inline const Aws::Vector<FineGrainedAction>& GetAuthorizedActions() const{ return m_authorizedActions; }
    inline bool AuthorizedActionsHasBeenSet() const { return m_authorizedActionsHasBeenSet; }
    inline void SetAuthorizedActions(const Aws::Vector<FineGrainedAction>& value) { m_authorizedActionsHasBeenSet = true; m_authorizedActions = value; }
    inline void SetAuthorizedActions(Aws::Vector<FineGrainedAction>&& value) { m_authorizedActionsHasBeenSet = true; m_authorizedActions = std::move(value); }
    inline ListAvailableResourceDimensionsRequest& WithAuthorizedActions(const Aws::Vector<FineGrainedAction>& value) { SetAuthorizedActions(value); return *this;}
    inline ListAvailableResourceDimensionsRequest& WithAuthorizedActions(Aws::Vector<FineGrainedAction>&& value) { SetAuthorizedActions(std::move(value)); return *this;}
    inline ListAvailableResourceDimensionsRequest& AddAuthorizedActions(const FineGrainedAction& value) { m_authorizedActionsHasBeenSet = true; m_authorizedActions.push_back(value); return *this; }
    inline ListAvailableResourceDimensionsRequest& AddAuthorizedActions(FineGrainedAction&& value) { m_authorizedActionsHasBeenSet = true; m_authorizedActions.push_back(std::move(value)); return *this; }
    ///@}
  private:

    ServiceType m_serviceType;
    bool m_serviceTypeHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_metrics;
    bool m_metricsHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<FineGrainedAction> m_authorizedActions;
    bool m_authorizedActionsHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
