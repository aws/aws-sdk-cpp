﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3-crt/model/ServerSideEncryptionRule.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Crt
{
namespace Model
{

  /**
   * <p>Specifies the default server-side-encryption configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ServerSideEncryptionConfiguration">AWS
   * API Reference</a></p>
   */
  class ServerSideEncryptionConfiguration
  {
  public:
    AWS_S3CRT_API ServerSideEncryptionConfiguration() = default;
    AWS_S3CRT_API ServerSideEncryptionConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CRT_API ServerSideEncryptionConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CRT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Container for information about a particular server-side encryption
     * configuration rule.</p>
     */
    inline const Aws::Vector<ServerSideEncryptionRule>& GetRules() const { return m_rules; }
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
    template<typename RulesT = Aws::Vector<ServerSideEncryptionRule>>
    void SetRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules = std::forward<RulesT>(value); }
    template<typename RulesT = Aws::Vector<ServerSideEncryptionRule>>
    ServerSideEncryptionConfiguration& WithRules(RulesT&& value) { SetRules(std::forward<RulesT>(value)); return *this;}
    template<typename RulesT = ServerSideEncryptionRule>
    ServerSideEncryptionConfiguration& AddRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules.emplace_back(std::forward<RulesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ServerSideEncryptionRule> m_rules;
    bool m_rulesHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Crt
} // namespace Aws
