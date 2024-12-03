/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/qbusiness/model/ActionConfiguration.h>
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
namespace QBusiness
{
namespace Model
{
  class GetDataAccessorResult
  {
  public:
    AWS_QBUSINESS_API GetDataAccessorResult();
    AWS_QBUSINESS_API GetDataAccessorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API GetDataAccessorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The friendly name of the data accessor.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }
    inline GetDataAccessorResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline GetDataAccessorResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline GetDataAccessorResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the data accessor.</p>
     */
    inline const Aws::String& GetDataAccessorId() const{ return m_dataAccessorId; }
    inline void SetDataAccessorId(const Aws::String& value) { m_dataAccessorId = value; }
    inline void SetDataAccessorId(Aws::String&& value) { m_dataAccessorId = std::move(value); }
    inline void SetDataAccessorId(const char* value) { m_dataAccessorId.assign(value); }
    inline GetDataAccessorResult& WithDataAccessorId(const Aws::String& value) { SetDataAccessorId(value); return *this;}
    inline GetDataAccessorResult& WithDataAccessorId(Aws::String&& value) { SetDataAccessorId(std::move(value)); return *this;}
    inline GetDataAccessorResult& WithDataAccessorId(const char* value) { SetDataAccessorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the data accessor.</p>
     */
    inline const Aws::String& GetDataAccessorArn() const{ return m_dataAccessorArn; }
    inline void SetDataAccessorArn(const Aws::String& value) { m_dataAccessorArn = value; }
    inline void SetDataAccessorArn(Aws::String&& value) { m_dataAccessorArn = std::move(value); }
    inline void SetDataAccessorArn(const char* value) { m_dataAccessorArn.assign(value); }
    inline GetDataAccessorResult& WithDataAccessorArn(const Aws::String& value) { SetDataAccessorArn(value); return *this;}
    inline GetDataAccessorResult& WithDataAccessorArn(Aws::String&& value) { SetDataAccessorArn(std::move(value)); return *this;}
    inline GetDataAccessorResult& WithDataAccessorArn(const char* value) { SetDataAccessorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Q Business application associated with this data
     * accessor.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }
    inline GetDataAccessorResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline GetDataAccessorResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline GetDataAccessorResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the AWS IAM Identity Center application
     * associated with this data accessor.</p>
     */
    inline const Aws::String& GetIdcApplicationArn() const{ return m_idcApplicationArn; }
    inline void SetIdcApplicationArn(const Aws::String& value) { m_idcApplicationArn = value; }
    inline void SetIdcApplicationArn(Aws::String&& value) { m_idcApplicationArn = std::move(value); }
    inline void SetIdcApplicationArn(const char* value) { m_idcApplicationArn.assign(value); }
    inline GetDataAccessorResult& WithIdcApplicationArn(const Aws::String& value) { SetIdcApplicationArn(value); return *this;}
    inline GetDataAccessorResult& WithIdcApplicationArn(Aws::String&& value) { SetIdcApplicationArn(std::move(value)); return *this;}
    inline GetDataAccessorResult& WithIdcApplicationArn(const char* value) { SetIdcApplicationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role for the ISV associated with
     * this data accessor.</p>
     */
    inline const Aws::String& GetPrincipal() const{ return m_principal; }
    inline void SetPrincipal(const Aws::String& value) { m_principal = value; }
    inline void SetPrincipal(Aws::String&& value) { m_principal = std::move(value); }
    inline void SetPrincipal(const char* value) { m_principal.assign(value); }
    inline GetDataAccessorResult& WithPrincipal(const Aws::String& value) { SetPrincipal(value); return *this;}
    inline GetDataAccessorResult& WithPrincipal(Aws::String&& value) { SetPrincipal(std::move(value)); return *this;}
    inline GetDataAccessorResult& WithPrincipal(const char* value) { SetPrincipal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of action configurations specifying the allowed actions and any
     * associated filters.</p>
     */
    inline const Aws::Vector<ActionConfiguration>& GetActionConfigurations() const{ return m_actionConfigurations; }
    inline void SetActionConfigurations(const Aws::Vector<ActionConfiguration>& value) { m_actionConfigurations = value; }
    inline void SetActionConfigurations(Aws::Vector<ActionConfiguration>&& value) { m_actionConfigurations = std::move(value); }
    inline GetDataAccessorResult& WithActionConfigurations(const Aws::Vector<ActionConfiguration>& value) { SetActionConfigurations(value); return *this;}
    inline GetDataAccessorResult& WithActionConfigurations(Aws::Vector<ActionConfiguration>&& value) { SetActionConfigurations(std::move(value)); return *this;}
    inline GetDataAccessorResult& AddActionConfigurations(const ActionConfiguration& value) { m_actionConfigurations.push_back(value); return *this; }
    inline GetDataAccessorResult& AddActionConfigurations(ActionConfiguration&& value) { m_actionConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp when the data accessor was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetDataAccessorResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetDataAccessorResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the data accessor was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline GetDataAccessorResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline GetDataAccessorResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDataAccessorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDataAccessorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDataAccessorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_displayName;

    Aws::String m_dataAccessorId;

    Aws::String m_dataAccessorArn;

    Aws::String m_applicationId;

    Aws::String m_idcApplicationArn;

    Aws::String m_principal;

    Aws::Vector<ActionConfiguration> m_actionConfigurations;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
