/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>

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
namespace OpenSearchServerless
{
namespace Model
{

  /**
   * <p>The maximum capacity limits for all OpenSearch Serverless collections, in
   * OpenSearch Compute Units (OCUs). These limits are used to scale your collections
   * based on the current workload. For more information, see <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-overview.html#serverless-scaling">Autoscaling</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/CapacityLimits">AWS
   * API Reference</a></p>
   */
  class CapacityLimits
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API CapacityLimits();
    AWS_OPENSEARCHSERVERLESS_API CapacityLimits(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API CapacityLimits& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum indexing capacity for collections.</p>
     */
    inline int GetMaxIndexingCapacityInOCU() const{ return m_maxIndexingCapacityInOCU; }

    /**
     * <p>The maximum indexing capacity for collections.</p>
     */
    inline bool MaxIndexingCapacityInOCUHasBeenSet() const { return m_maxIndexingCapacityInOCUHasBeenSet; }

    /**
     * <p>The maximum indexing capacity for collections.</p>
     */
    inline void SetMaxIndexingCapacityInOCU(int value) { m_maxIndexingCapacityInOCUHasBeenSet = true; m_maxIndexingCapacityInOCU = value; }

    /**
     * <p>The maximum indexing capacity for collections.</p>
     */
    inline CapacityLimits& WithMaxIndexingCapacityInOCU(int value) { SetMaxIndexingCapacityInOCU(value); return *this;}


    /**
     * <p>The maximum search capacity for collections.</p>
     */
    inline int GetMaxSearchCapacityInOCU() const{ return m_maxSearchCapacityInOCU; }

    /**
     * <p>The maximum search capacity for collections.</p>
     */
    inline bool MaxSearchCapacityInOCUHasBeenSet() const { return m_maxSearchCapacityInOCUHasBeenSet; }

    /**
     * <p>The maximum search capacity for collections.</p>
     */
    inline void SetMaxSearchCapacityInOCU(int value) { m_maxSearchCapacityInOCUHasBeenSet = true; m_maxSearchCapacityInOCU = value; }

    /**
     * <p>The maximum search capacity for collections.</p>
     */
    inline CapacityLimits& WithMaxSearchCapacityInOCU(int value) { SetMaxSearchCapacityInOCU(value); return *this;}

  private:

    int m_maxIndexingCapacityInOCU;
    bool m_maxIndexingCapacityInOCUHasBeenSet = false;

    int m_maxSearchCapacityInOCU;
    bool m_maxSearchCapacityInOCUHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
