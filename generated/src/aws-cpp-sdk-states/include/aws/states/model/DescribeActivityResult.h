/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/states/model/EncryptionConfiguration.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SFN
{
namespace Model
{
  class DescribeActivityResult
  {
  public:
    AWS_SFN_API DescribeActivityResult();
    AWS_SFN_API DescribeActivityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SFN_API DescribeActivityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the activity.</p>
     */
    inline const Aws::String& GetActivityArn() const{ return m_activityArn; }
    inline void SetActivityArn(const Aws::String& value) { m_activityArn = value; }
    inline void SetActivityArn(Aws::String&& value) { m_activityArn = std::move(value); }
    inline void SetActivityArn(const char* value) { m_activityArn.assign(value); }
    inline DescribeActivityResult& WithActivityArn(const Aws::String& value) { SetActivityArn(value); return *this;}
    inline DescribeActivityResult& WithActivityArn(Aws::String&& value) { SetActivityArn(std::move(value)); return *this;}
    inline DescribeActivityResult& WithActivityArn(const char* value) { SetActivityArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the activity.</p> <p>A name must <i>not</i> contain:</p> <ul>
     * <li> <p>white space</p> </li> <li> <p>brackets <code>&lt; &gt; { } [ ]</code>
     * </p> </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li>
     * <p>special characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li>
     * <li> <p>control characters (<code>U+0000-001F</code>,
     * <code>U+007F-009F</code>)</p> </li> </ul> <p>To enable logging with CloudWatch
     * Logs, the name should only contain 0-9, A-Z, a-z, - and _.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline DescribeActivityResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DescribeActivityResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DescribeActivityResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the activity is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }
    inline DescribeActivityResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline DescribeActivityResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for configured server-side encryption.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const{ return m_encryptionConfiguration; }
    inline void SetEncryptionConfiguration(const EncryptionConfiguration& value) { m_encryptionConfiguration = value; }
    inline void SetEncryptionConfiguration(EncryptionConfiguration&& value) { m_encryptionConfiguration = std::move(value); }
    inline DescribeActivityResult& WithEncryptionConfiguration(const EncryptionConfiguration& value) { SetEncryptionConfiguration(value); return *this;}
    inline DescribeActivityResult& WithEncryptionConfiguration(EncryptionConfiguration&& value) { SetEncryptionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeActivityResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeActivityResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeActivityResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_activityArn;

    Aws::String m_name;

    Aws::Utils::DateTime m_creationDate;

    EncryptionConfiguration m_encryptionConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
