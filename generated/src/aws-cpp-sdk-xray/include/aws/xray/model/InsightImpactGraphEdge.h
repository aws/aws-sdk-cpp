/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>

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
namespace XRay
{
namespace Model
{

  /**
   * <p>The connection between two service in an insight impact graph.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/InsightImpactGraphEdge">AWS
   * API Reference</a></p>
   */
  class InsightImpactGraphEdge
  {
  public:
    AWS_XRAY_API InsightImpactGraphEdge();
    AWS_XRAY_API InsightImpactGraphEdge(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API InsightImpactGraphEdge& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Identifier of the edge. Unique within a service map.</p>
     */
    inline int GetReferenceId() const{ return m_referenceId; }

    /**
     * <p>Identifier of the edge. Unique within a service map.</p>
     */
    inline bool ReferenceIdHasBeenSet() const { return m_referenceIdHasBeenSet; }

    /**
     * <p>Identifier of the edge. Unique within a service map.</p>
     */
    inline void SetReferenceId(int value) { m_referenceIdHasBeenSet = true; m_referenceId = value; }

    /**
     * <p>Identifier of the edge. Unique within a service map.</p>
     */
    inline InsightImpactGraphEdge& WithReferenceId(int value) { SetReferenceId(value); return *this;}

  private:

    int m_referenceId;
    bool m_referenceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
