﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qldb/model/PermissionsMode.h>
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
namespace QLDB
{
namespace Model
{
  class UpdateLedgerPermissionsModeResult
  {
  public:
    AWS_QLDB_API UpdateLedgerPermissionsModeResult();
    AWS_QLDB_API UpdateLedgerPermissionsModeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QLDB_API UpdateLedgerPermissionsModeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the ledger.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline UpdateLedgerPermissionsModeResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateLedgerPermissionsModeResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateLedgerPermissionsModeResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the ledger.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline UpdateLedgerPermissionsModeResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateLedgerPermissionsModeResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateLedgerPermissionsModeResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current permissions mode of the ledger.</p>
     */
    inline const PermissionsMode& GetPermissionsMode() const{ return m_permissionsMode; }
    inline void SetPermissionsMode(const PermissionsMode& value) { m_permissionsMode = value; }
    inline void SetPermissionsMode(PermissionsMode&& value) { m_permissionsMode = std::move(value); }
    inline UpdateLedgerPermissionsModeResult& WithPermissionsMode(const PermissionsMode& value) { SetPermissionsMode(value); return *this;}
    inline UpdateLedgerPermissionsModeResult& WithPermissionsMode(PermissionsMode&& value) { SetPermissionsMode(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateLedgerPermissionsModeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateLedgerPermissionsModeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateLedgerPermissionsModeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;

    Aws::String m_arn;

    PermissionsMode m_permissionsMode;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
