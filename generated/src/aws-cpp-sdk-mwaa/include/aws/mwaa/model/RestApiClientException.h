﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
#include <aws/core/utils/Document.h>
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
namespace MWAA
{
namespace Model
{

  /**
   * <p>An exception indicating that a client-side error occurred during the Apache
   * Airflow REST API call.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/RestApiClientException">AWS
   * API Reference</a></p>
   */
  class RestApiClientException
  {
  public:
    AWS_MWAA_API RestApiClientException();
    AWS_MWAA_API RestApiClientException(Aws::Utils::Json::JsonView jsonValue);
    AWS_MWAA_API RestApiClientException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MWAA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The HTTP status code returned by the Apache Airflow REST API call.</p>
     */
    inline int GetRestApiStatusCode() const{ return m_restApiStatusCode; }
    inline bool RestApiStatusCodeHasBeenSet() const { return m_restApiStatusCodeHasBeenSet; }
    inline void SetRestApiStatusCode(int value) { m_restApiStatusCodeHasBeenSet = true; m_restApiStatusCode = value; }
    inline RestApiClientException& WithRestApiStatusCode(int value) { SetRestApiStatusCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error response data from the Apache Airflow REST API call, provided as a
     * JSON object.</p>
     */
    inline Aws::Utils::DocumentView GetRestApiResponse() const{ return m_restApiResponse; }
    inline bool RestApiResponseHasBeenSet() const { return m_restApiResponseHasBeenSet; }
    inline void SetRestApiResponse(const Aws::Utils::Document& value) { m_restApiResponseHasBeenSet = true; m_restApiResponse = value; }
    inline void SetRestApiResponse(Aws::Utils::Document&& value) { m_restApiResponseHasBeenSet = true; m_restApiResponse = std::move(value); }
    inline RestApiClientException& WithRestApiResponse(const Aws::Utils::Document& value) { SetRestApiResponse(value); return *this;}
    inline RestApiClientException& WithRestApiResponse(Aws::Utils::Document&& value) { SetRestApiResponse(std::move(value)); return *this;}
    ///@}
  private:

    int m_restApiStatusCode;
    bool m_restApiStatusCodeHasBeenSet = false;

    Aws::Utils::Document m_restApiResponse;
    bool m_restApiResponseHasBeenSet = false;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
