/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf-regional/model/FieldToMatch.h>
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
namespace WAFRegional
{
namespace Model
{

  /**
   *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
   * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
   * WAF</b>, use the AWS WAFV2 API and see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
   * endpoints for regional and global use. </p>  <p>The Amazon Kinesis Data
   * Firehose, <code>RedactedFields</code> information, and the web ACL Amazon
   * Resource Name (ARN).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/LoggingConfiguration">AWS
   * API Reference</a></p>
   */
  class LoggingConfiguration
  {
  public:
    AWS_WAFREGIONAL_API LoggingConfiguration() = default;
    AWS_WAFREGIONAL_API LoggingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API LoggingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL that you want to associate with
     * <code>LogDestinationConfigs</code>.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    LoggingConfiguration& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of Amazon Kinesis Data Firehose ARNs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogDestinationConfigs() const { return m_logDestinationConfigs; }
    inline bool LogDestinationConfigsHasBeenSet() const { return m_logDestinationConfigsHasBeenSet; }
    template<typename LogDestinationConfigsT = Aws::Vector<Aws::String>>
    void SetLogDestinationConfigs(LogDestinationConfigsT&& value) { m_logDestinationConfigsHasBeenSet = true; m_logDestinationConfigs = std::forward<LogDestinationConfigsT>(value); }
    template<typename LogDestinationConfigsT = Aws::Vector<Aws::String>>
    LoggingConfiguration& WithLogDestinationConfigs(LogDestinationConfigsT&& value) { SetLogDestinationConfigs(std::forward<LogDestinationConfigsT>(value)); return *this;}
    template<typename LogDestinationConfigsT = Aws::String>
    LoggingConfiguration& AddLogDestinationConfigs(LogDestinationConfigsT&& value) { m_logDestinationConfigsHasBeenSet = true; m_logDestinationConfigs.emplace_back(std::forward<LogDestinationConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The parts of the request that you want redacted from the logs. For example,
     * if you redact the cookie field, the cookie field in the firehose will be
     * <code>xxx</code>. </p>
     */
    inline const Aws::Vector<FieldToMatch>& GetRedactedFields() const { return m_redactedFields; }
    inline bool RedactedFieldsHasBeenSet() const { return m_redactedFieldsHasBeenSet; }
    template<typename RedactedFieldsT = Aws::Vector<FieldToMatch>>
    void SetRedactedFields(RedactedFieldsT&& value) { m_redactedFieldsHasBeenSet = true; m_redactedFields = std::forward<RedactedFieldsT>(value); }
    template<typename RedactedFieldsT = Aws::Vector<FieldToMatch>>
    LoggingConfiguration& WithRedactedFields(RedactedFieldsT&& value) { SetRedactedFields(std::forward<RedactedFieldsT>(value)); return *this;}
    template<typename RedactedFieldsT = FieldToMatch>
    LoggingConfiguration& AddRedactedFields(RedactedFieldsT&& value) { m_redactedFieldsHasBeenSet = true; m_redactedFields.emplace_back(std::forward<RedactedFieldsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_logDestinationConfigs;
    bool m_logDestinationConfigsHasBeenSet = false;

    Aws::Vector<FieldToMatch> m_redactedFields;
    bool m_redactedFieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
