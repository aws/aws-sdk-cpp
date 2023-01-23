/**
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


    /**
     * <p>The name of the ledger.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the ledger.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the ledger.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the ledger.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the ledger.</p>
     */
    inline UpdateLedgerPermissionsModeResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the ledger.</p>
     */
    inline UpdateLedgerPermissionsModeResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the ledger.</p>
     */
    inline UpdateLedgerPermissionsModeResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the ledger.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the ledger.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the ledger.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the ledger.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the ledger.</p>
     */
    inline UpdateLedgerPermissionsModeResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the ledger.</p>
     */
    inline UpdateLedgerPermissionsModeResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the ledger.</p>
     */
    inline UpdateLedgerPermissionsModeResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The current permissions mode of the ledger.</p>
     */
    inline const PermissionsMode& GetPermissionsMode() const{ return m_permissionsMode; }

    /**
     * <p>The current permissions mode of the ledger.</p>
     */
    inline void SetPermissionsMode(const PermissionsMode& value) { m_permissionsMode = value; }

    /**
     * <p>The current permissions mode of the ledger.</p>
     */
    inline void SetPermissionsMode(PermissionsMode&& value) { m_permissionsMode = std::move(value); }

    /**
     * <p>The current permissions mode of the ledger.</p>
     */
    inline UpdateLedgerPermissionsModeResult& WithPermissionsMode(const PermissionsMode& value) { SetPermissionsMode(value); return *this;}

    /**
     * <p>The current permissions mode of the ledger.</p>
     */
    inline UpdateLedgerPermissionsModeResult& WithPermissionsMode(PermissionsMode&& value) { SetPermissionsMode(std::move(value)); return *this;}

  private:

    Aws::String m_name;

    Aws::String m_arn;

    PermissionsMode m_permissionsMode;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
