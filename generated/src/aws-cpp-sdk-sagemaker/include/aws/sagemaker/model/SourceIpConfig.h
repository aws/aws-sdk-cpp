﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A list of IP address ranges (<a
   * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>).
   * Used to create an allow list of IP addresses for a private workforce. Workers
   * will only be able to log in to their worker portal from an IP address within
   * this range. By default, a workforce isn't restricted to specific IP
   * addresses.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SourceIpConfig">AWS
   * API Reference</a></p>
   */
  class SourceIpConfig
  {
  public:
    AWS_SAGEMAKER_API SourceIpConfig() = default;
    AWS_SAGEMAKER_API SourceIpConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API SourceIpConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of one to ten <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">Classless
     * Inter-Domain Routing</a> (CIDR) values.</p> <p>Maximum: Ten CIDR values</p>
     *  <p>The following Length Constraints apply to individual CIDR values in
     * the CIDR value list.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetCidrs() const { return m_cidrs; }
    inline bool CidrsHasBeenSet() const { return m_cidrsHasBeenSet; }
    template<typename CidrsT = Aws::Vector<Aws::String>>
    void SetCidrs(CidrsT&& value) { m_cidrsHasBeenSet = true; m_cidrs = std::forward<CidrsT>(value); }
    template<typename CidrsT = Aws::Vector<Aws::String>>
    SourceIpConfig& WithCidrs(CidrsT&& value) { SetCidrs(std::forward<CidrsT>(value)); return *this;}
    template<typename CidrsT = Aws::String>
    SourceIpConfig& AddCidrs(CidrsT&& value) { m_cidrsHasBeenSet = true; m_cidrs.emplace_back(std::forward<CidrsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_cidrs;
    bool m_cidrsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
