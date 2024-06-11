﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf/model/FieldToMatch.h>
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
namespace WAF
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/LoggingConfiguration">AWS
   * API Reference</a></p>
   */
  class LoggingConfiguration
  {
  public:
    AWS_WAF_API LoggingConfiguration();
    AWS_WAF_API LoggingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API LoggingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL that you want to associate with
     * <code>LogDestinationConfigs</code>.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline LoggingConfiguration& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline LoggingConfiguration& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline LoggingConfiguration& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of Amazon Kinesis Data Firehose ARNs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogDestinationConfigs() const{ return m_logDestinationConfigs; }
    inline bool LogDestinationConfigsHasBeenSet() const { return m_logDestinationConfigsHasBeenSet; }
    inline void SetLogDestinationConfigs(const Aws::Vector<Aws::String>& value) { m_logDestinationConfigsHasBeenSet = true; m_logDestinationConfigs = value; }
    inline void SetLogDestinationConfigs(Aws::Vector<Aws::String>&& value) { m_logDestinationConfigsHasBeenSet = true; m_logDestinationConfigs = std::move(value); }
    inline LoggingConfiguration& WithLogDestinationConfigs(const Aws::Vector<Aws::String>& value) { SetLogDestinationConfigs(value); return *this;}
    inline LoggingConfiguration& WithLogDestinationConfigs(Aws::Vector<Aws::String>&& value) { SetLogDestinationConfigs(std::move(value)); return *this;}
    inline LoggingConfiguration& AddLogDestinationConfigs(const Aws::String& value) { m_logDestinationConfigsHasBeenSet = true; m_logDestinationConfigs.push_back(value); return *this; }
    inline LoggingConfiguration& AddLogDestinationConfigs(Aws::String&& value) { m_logDestinationConfigsHasBeenSet = true; m_logDestinationConfigs.push_back(std::move(value)); return *this; }
    inline LoggingConfiguration& AddLogDestinationConfigs(const char* value) { m_logDestinationConfigsHasBeenSet = true; m_logDestinationConfigs.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The parts of the request that you want redacted from the logs. For example,
     * if you redact the cookie field, the cookie field in the firehose will be
     * <code>xxx</code>. </p>
     */
    inline const Aws::Vector<FieldToMatch>& GetRedactedFields() const{ return m_redactedFields; }
    inline bool RedactedFieldsHasBeenSet() const { return m_redactedFieldsHasBeenSet; }
    inline void SetRedactedFields(const Aws::Vector<FieldToMatch>& value) { m_redactedFieldsHasBeenSet = true; m_redactedFields = value; }
    inline void SetRedactedFields(Aws::Vector<FieldToMatch>&& value) { m_redactedFieldsHasBeenSet = true; m_redactedFields = std::move(value); }
    inline LoggingConfiguration& WithRedactedFields(const Aws::Vector<FieldToMatch>& value) { SetRedactedFields(value); return *this;}
    inline LoggingConfiguration& WithRedactedFields(Aws::Vector<FieldToMatch>&& value) { SetRedactedFields(std::move(value)); return *this;}
    inline LoggingConfiguration& AddRedactedFields(const FieldToMatch& value) { m_redactedFieldsHasBeenSet = true; m_redactedFields.push_back(value); return *this; }
    inline LoggingConfiguration& AddRedactedFields(FieldToMatch&& value) { m_redactedFieldsHasBeenSet = true; m_redactedFields.push_back(std::move(value)); return *this; }
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
} // namespace WAF
} // namespace Aws
