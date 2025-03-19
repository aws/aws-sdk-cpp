/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
#include <aws/mwaa/MWAARequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mwaa/model/RestApiMethod.h>
#include <aws/core/utils/Document.h>
#include <utility>

namespace Aws
{
namespace MWAA
{
namespace Model
{

  /**
   */
  class InvokeRestApiRequest : public MWAARequest
  {
  public:
    AWS_MWAA_API InvokeRestApiRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InvokeRestApi"; }

    AWS_MWAA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the Amazon MWAA environment. For example,
     * <code>MyMWAAEnvironment</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    InvokeRestApiRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Apache Airflow REST API endpoint path to be called. For example,
     * <code>/dags/123456/clearTaskInstances</code>. For more information, see <a
     * href="https://airflow.apache.org/docs/apache-airflow/stable/stable-rest-api-ref.html">Apache
     * Airflow API</a> </p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    InvokeRestApiRequest& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP method used for making Airflow REST API calls. For example,
     * <code>POST</code>. </p>
     */
    inline RestApiMethod GetMethod() const { return m_method; }
    inline bool MethodHasBeenSet() const { return m_methodHasBeenSet; }
    inline void SetMethod(RestApiMethod value) { m_methodHasBeenSet = true; m_method = value; }
    inline InvokeRestApiRequest& WithMethod(RestApiMethod value) { SetMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Query parameters to be included in the Apache Airflow REST API call, provided
     * as a JSON object. </p>
     */
    inline Aws::Utils::DocumentView GetQueryParameters() const { return m_queryParameters; }
    inline bool QueryParametersHasBeenSet() const { return m_queryParametersHasBeenSet; }
    template<typename QueryParametersT = Aws::Utils::Document>
    void SetQueryParameters(QueryParametersT&& value) { m_queryParametersHasBeenSet = true; m_queryParameters = std::forward<QueryParametersT>(value); }
    template<typename QueryParametersT = Aws::Utils::Document>
    InvokeRestApiRequest& WithQueryParameters(QueryParametersT&& value) { SetQueryParameters(std::forward<QueryParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The request body for the Apache Airflow REST API call, provided as a JSON
     * object.</p>
     */
    inline Aws::Utils::DocumentView GetMemberBody() const { return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    template<typename BodyT = Aws::Utils::Document>
    void SetBody(BodyT&& value) { m_bodyHasBeenSet = true; m_body = std::forward<BodyT>(value); }
    template<typename BodyT = Aws::Utils::Document>
    InvokeRestApiRequest& WithBody(BodyT&& value) { SetBody(std::forward<BodyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    RestApiMethod m_method{RestApiMethod::NOT_SET};
    bool m_methodHasBeenSet = false;

    Aws::Utils::Document m_queryParameters;
    bool m_queryParametersHasBeenSet = false;

    Aws::Utils::Document m_body;
    bool m_bodyHasBeenSet = false;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
