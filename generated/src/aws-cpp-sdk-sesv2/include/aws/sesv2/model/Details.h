﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sesv2/model/RouteDetails.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object that contains configuration details of multi-region endpoint
   * (global-endpoint).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/Details">AWS API
   * Reference</a></p>
   */
  class Details
  {
  public:
    AWS_SESV2_API Details();
    AWS_SESV2_API Details(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Details& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of route configuration details. Must contain exactly one route
     * configuration.</p>
     */
    inline const Aws::Vector<RouteDetails>& GetRoutesDetails() const{ return m_routesDetails; }
    inline bool RoutesDetailsHasBeenSet() const { return m_routesDetailsHasBeenSet; }
    inline void SetRoutesDetails(const Aws::Vector<RouteDetails>& value) { m_routesDetailsHasBeenSet = true; m_routesDetails = value; }
    inline void SetRoutesDetails(Aws::Vector<RouteDetails>&& value) { m_routesDetailsHasBeenSet = true; m_routesDetails = std::move(value); }
    inline Details& WithRoutesDetails(const Aws::Vector<RouteDetails>& value) { SetRoutesDetails(value); return *this;}
    inline Details& WithRoutesDetails(Aws::Vector<RouteDetails>&& value) { SetRoutesDetails(std::move(value)); return *this;}
    inline Details& AddRoutesDetails(const RouteDetails& value) { m_routesDetailsHasBeenSet = true; m_routesDetails.push_back(value); return *this; }
    inline Details& AddRoutesDetails(RouteDetails&& value) { m_routesDetailsHasBeenSet = true; m_routesDetails.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<RouteDetails> m_routesDetails;
    bool m_routesDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
