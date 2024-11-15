/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/MetricDatum.h>
#include <aws/monitoring/model/EntityMetricData.h>
#include <utility>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   */
  class PutMetricDataRequest : public CloudWatchRequest
  {
  public:
    AWS_CLOUDWATCH_API PutMetricDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutMetricData"; }

    AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

#ifdef ENABLED_ZLIB_REQUEST_COMPRESSION
    virtual Aws::Client::CompressionAlgorithm
    GetSelectedCompressionAlgorithm(Aws::Client::RequestCompressionConfig config) const override;
#endif

  protected:
    AWS_CLOUDWATCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The namespace for the metric data. You can use ASCII characters for the
     * namespace, except for control characters which are not supported.</p> <p>To
     * avoid conflicts with Amazon Web Services service namespaces, you should not
     * specify a namespace that begins with <code>AWS/</code> </p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }
    inline PutMetricDataRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}
    inline PutMetricDataRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}
    inline PutMetricDataRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data for the metrics. Use this parameter if your metrics do not contain
     * associated entities. The array can include no more than 1000 metrics per
     * call.</p> <p>The limit of metrics allowed, 1000, is the sum of both
     * <code>EntityMetricData</code> and <code>MetricData</code> metrics.</p>
     */
    inline const Aws::Vector<MetricDatum>& GetMetricData() const{ return m_metricData; }
    inline bool MetricDataHasBeenSet() const { return m_metricDataHasBeenSet; }
    inline void SetMetricData(const Aws::Vector<MetricDatum>& value) { m_metricDataHasBeenSet = true; m_metricData = value; }
    inline void SetMetricData(Aws::Vector<MetricDatum>&& value) { m_metricDataHasBeenSet = true; m_metricData = std::move(value); }
    inline PutMetricDataRequest& WithMetricData(const Aws::Vector<MetricDatum>& value) { SetMetricData(value); return *this;}
    inline PutMetricDataRequest& WithMetricData(Aws::Vector<MetricDatum>&& value) { SetMetricData(std::move(value)); return *this;}
    inline PutMetricDataRequest& AddMetricData(const MetricDatum& value) { m_metricDataHasBeenSet = true; m_metricData.push_back(value); return *this; }
    inline PutMetricDataRequest& AddMetricData(MetricDatum&& value) { m_metricDataHasBeenSet = true; m_metricData.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Data for metrics that contain associated entity information. You can include
     * up to two <code>EntityMetricData</code> objects, each of which can contain a
     * single <code>Entity</code> and associated metrics.</p> <p>The limit of metrics
     * allowed, 1000, is the sum of both <code>EntityMetricData</code> and
     * <code>MetricData</code> metrics.</p>
     */
    inline const Aws::Vector<EntityMetricData>& GetEntityMetricData() const{ return m_entityMetricData; }
    inline bool EntityMetricDataHasBeenSet() const { return m_entityMetricDataHasBeenSet; }
    inline void SetEntityMetricData(const Aws::Vector<EntityMetricData>& value) { m_entityMetricDataHasBeenSet = true; m_entityMetricData = value; }
    inline void SetEntityMetricData(Aws::Vector<EntityMetricData>&& value) { m_entityMetricDataHasBeenSet = true; m_entityMetricData = std::move(value); }
    inline PutMetricDataRequest& WithEntityMetricData(const Aws::Vector<EntityMetricData>& value) { SetEntityMetricData(value); return *this;}
    inline PutMetricDataRequest& WithEntityMetricData(Aws::Vector<EntityMetricData>&& value) { SetEntityMetricData(std::move(value)); return *this;}
    inline PutMetricDataRequest& AddEntityMetricData(const EntityMetricData& value) { m_entityMetricDataHasBeenSet = true; m_entityMetricData.push_back(value); return *this; }
    inline PutMetricDataRequest& AddEntityMetricData(EntityMetricData&& value) { m_entityMetricDataHasBeenSet = true; m_entityMetricData.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether to accept valid metric data when an invalid entity is sent.</p> <ul>
     * <li> <p>When set to <code>true</code>: Any validation error (for entity or
     * metric data) will fail the entire request, and no data will be ingested. The
     * failed operation will return a 400 result with the error.</p> </li> <li> <p>When
     * set to <code>false</code>: Validation errors in the entity will not associate
     * the metric with the entity, but the metric data will still be accepted and
     * ingested. Validation errors in the metric data will fail the entire request, and
     * no data will be ingested.</p> <p>In the case of an invalid entity, the operation
     * will return a <code>200</code> status, but an additional response header will
     * contain information about the validation errors. The new header,
     * <code>X-Amzn-Failure-Message</code> is an enumeration of the following
     * values:</p> <ul> <li> <p> <code>InvalidEntity</code> - The provided entity is
     * invalid.</p> </li> <li> <p> <code>InvalidKeyAttributes</code> - The provided
     * <code>KeyAttributes</code> of an entity is invalid.</p> </li> <li> <p>
     * <code>InvalidAttributes</code> - The provided <code>Attributes</code> of an
     * entity is invalid.</p> </li> <li> <p> <code>InvalidTypeValue</code> - The
     * provided <code>Type</code> in the <code>KeyAttributes</code> of an entity is
     * invalid.</p> </li> <li> <p> <code>EntitySizeTooLarge</code> - The number of
     * <code>EntityMetricData</code> objects allowed is 2.</p> </li> <li> <p>
     * <code>MissingRequiredFields</code> - There are missing required fields in the
     * <code>KeyAttributes</code> for the provided <code>Type</code>.</p> </li> </ul>
     * <p>For details of the requirements for specifying an entity, see <a
     * href="https://docs.aws.amazon.com/adding-your-own-related-telemetry.html">How to
     * add related information to telemetry</a> in the <i>CloudWatch User
     * Guide</i>.</p> </li> </ul> <p>This parameter is <i>required</i> when
     * <code>EntityMetricData</code> is included.</p>
     */
    inline bool GetStrictEntityValidation() const{ return m_strictEntityValidation; }
    inline bool StrictEntityValidationHasBeenSet() const { return m_strictEntityValidationHasBeenSet; }
    inline void SetStrictEntityValidation(bool value) { m_strictEntityValidationHasBeenSet = true; m_strictEntityValidation = value; }
    inline PutMetricDataRequest& WithStrictEntityValidation(bool value) { SetStrictEntityValidation(value); return *this;}
    ///@}
  private:

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::Vector<MetricDatum> m_metricData;
    bool m_metricDataHasBeenSet = false;

    Aws::Vector<EntityMetricData> m_entityMetricData;
    bool m_entityMetricDataHasBeenSet = false;

    bool m_strictEntityValidation;
    bool m_strictEntityValidationHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
