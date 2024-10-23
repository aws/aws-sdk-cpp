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
    AWS_MWAA_API InvokeRestApiRequest();

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
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline InvokeRestApiRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline InvokeRestApiRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline InvokeRestApiRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Apache Airflow REST API endpoint path to be called. For example,
     * <code>/dags/123456/clearTaskInstances</code>. For more information, see <a
     * href="https://airflow.apache.org/docs/apache-airflow/stable/stable-rest-api-ref.html">Apache
     * Airflow API</a> </p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }
    inline InvokeRestApiRequest& WithPath(const Aws::String& value) { SetPath(value); return *this;}
    inline InvokeRestApiRequest& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}
    inline InvokeRestApiRequest& WithPath(const char* value) { SetPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP method used for making Airflow REST API calls. For example,
     * <code>POST</code>. </p>
     */
    inline const RestApiMethod& GetMethod() const{ return m_method; }
    inline bool MethodHasBeenSet() const { return m_methodHasBeenSet; }
    inline void SetMethod(const RestApiMethod& value) { m_methodHasBeenSet = true; m_method = value; }
    inline void SetMethod(RestApiMethod&& value) { m_methodHasBeenSet = true; m_method = std::move(value); }
    inline InvokeRestApiRequest& WithMethod(const RestApiMethod& value) { SetMethod(value); return *this;}
    inline InvokeRestApiRequest& WithMethod(RestApiMethod&& value) { SetMethod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Query parameters to be included in the Apache Airflow REST API call, provided
     * as a JSON object. </p>
     */
    inline Aws::Utils::DocumentView GetQueryParameters() const{ return m_queryParameters; }
    inline bool QueryParametersHasBeenSet() const { return m_queryParametersHasBeenSet; }
    inline void SetQueryParameters(const Aws::Utils::Document& value) { m_queryParametersHasBeenSet = true; m_queryParameters = value; }
    inline void SetQueryParameters(Aws::Utils::Document&& value) { m_queryParametersHasBeenSet = true; m_queryParameters = std::move(value); }
    inline InvokeRestApiRequest& WithQueryParameters(const Aws::Utils::Document& value) { SetQueryParameters(value); return *this;}
    inline InvokeRestApiRequest& WithQueryParameters(Aws::Utils::Document&& value) { SetQueryParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The request body for the Apache Airflow REST API call, provided as a JSON
     * object.</p>
     */
    inline Aws::Utils::DocumentView GetMemberBody() const{ return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    inline void SetBody(const Aws::Utils::Document& value) { m_bodyHasBeenSet = true; m_body = value; }
    inline void SetBody(Aws::Utils::Document&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }
    inline InvokeRestApiRequest& WithBody(const Aws::Utils::Document& value) { SetBody(value); return *this;}
    inline InvokeRestApiRequest& WithBody(Aws::Utils::Document&& value) { SetBody(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    RestApiMethod m_method;
    bool m_methodHasBeenSet = false;

    Aws::Utils::Document m_queryParameters;
    bool m_queryParametersHasBeenSet = false;

    Aws::Utils::Document m_body;
    bool m_bodyHasBeenSet = false;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
