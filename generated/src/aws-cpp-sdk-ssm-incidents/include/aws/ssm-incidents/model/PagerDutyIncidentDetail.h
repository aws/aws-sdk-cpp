/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>Details about the PagerDuty incident associated with an incident created by
   * an Incident Manager response plan.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/PagerDutyIncidentDetail">AWS
   * API Reference</a></p>
   */
  class PagerDutyIncidentDetail
  {
  public:
    AWS_SSMINCIDENTS_API PagerDutyIncidentDetail() = default;
    AWS_SSMINCIDENTS_API PagerDutyIncidentDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API PagerDutyIncidentDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether to resolve the PagerDuty incident when you resolve the
     * associated Incident Manager incident.</p>
     */
    inline bool GetAutoResolve() const { return m_autoResolve; }
    inline bool AutoResolveHasBeenSet() const { return m_autoResolveHasBeenSet; }
    inline void SetAutoResolve(bool value) { m_autoResolveHasBeenSet = true; m_autoResolve = value; }
    inline PagerDutyIncidentDetail& WithAutoResolve(bool value) { SetAutoResolve(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the incident associated with the PagerDuty service for the response
     * plan.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    PagerDutyIncidentDetail& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services Secrets Manager secret that stores your
     * PagerDuty key, either a General Access REST API Key or User Token REST API Key,
     * and other user credentials.</p>
     */
    inline const Aws::String& GetSecretId() const { return m_secretId; }
    inline bool SecretIdHasBeenSet() const { return m_secretIdHasBeenSet; }
    template<typename SecretIdT = Aws::String>
    void SetSecretId(SecretIdT&& value) { m_secretIdHasBeenSet = true; m_secretId = std::forward<SecretIdT>(value); }
    template<typename SecretIdT = Aws::String>
    PagerDutyIncidentDetail& WithSecretId(SecretIdT&& value) { SetSecretId(std::forward<SecretIdT>(value)); return *this;}
    ///@}
  private:

    bool m_autoResolve{false};
    bool m_autoResolveHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_secretId;
    bool m_secretIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
