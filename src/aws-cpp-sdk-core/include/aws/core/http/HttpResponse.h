/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/http/HttpRequest.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/client/CoreErrors.h>

namespace Aws
{
    namespace Utils
    {
        namespace Stream
        {
            class ResponseStream;
        }
    }
    namespace Http
    {
        /**
         * Enum of Http response Codes. The integer values of the response codes correspond to the values in the RFC.
         */
        enum class HttpResponseCode
        {
            REQUEST_NOT_MADE = -1,
            CONTINUE = 100,
            SWITCHING_PROTOCOLS = 101,
            PROCESSING = 102,
            OK = 200,
            CREATED = 201,
            ACCEPTED = 202,
            NON_AUTHORITATIVE_INFORMATION = 203,
            NO_CONTENT = 204,
            RESET_CONTENT = 205,
            PARTIAL_CONTENT = 206,
            MULTI_STATUS = 207,
            ALREADY_REPORTED = 208,
            IM_USED = 226,
            MULTIPLE_CHOICES = 300,
            MOVED_PERMANENTLY = 301,
            FOUND = 302,
            SEE_OTHER = 303,
            NOT_MODIFIED = 304,
            USE_PROXY = 305,
            SWITCH_PROXY = 306,
            TEMPORARY_REDIRECT = 307,
            PERMANENT_REDIRECT = 308,
            BAD_REQUEST = 400,
            UNAUTHORIZED = 401,
            PAYMENT_REQUIRED = 402,
            FORBIDDEN = 403,
            NOT_FOUND = 404,
            METHOD_NOT_ALLOWED = 405,
            NOT_ACCEPTABLE = 406,
            PROXY_AUTHENTICATION_REQUIRED = 407,
            REQUEST_TIMEOUT = 408,
            CONFLICT = 409,
            GONE = 410,
            LENGTH_REQUIRED = 411,
            PRECONDITION_FAILED = 412,
            REQUEST_ENTITY_TOO_LARGE = 413,
            REQUEST_URI_TOO_LONG = 414,
            UNSUPPORTED_MEDIA_TYPE = 415,
            REQUESTED_RANGE_NOT_SATISFIABLE = 416,
            EXPECTATION_FAILED = 417,
            IM_A_TEAPOT = 418,
            AUTHENTICATION_TIMEOUT = 419,
            METHOD_FAILURE = 420,
            UNPROC_ENTITY = 422,
            LOCKED = 423,
            FAILED_DEPENDENCY = 424,
            UPGRADE_REQUIRED = 426,
            PRECONDITION_REQUIRED = 427,
            TOO_MANY_REQUESTS = 429,
            REQUEST_HEADER_FIELDS_TOO_LARGE = 431,
            LOGIN_TIMEOUT = 440,
            NO_RESPONSE = 444,
            RETRY_WITH = 449,
            BLOCKED = 450,
            REDIRECT = 451,
            REQUEST_HEADER_TOO_LARGE = 494,
            CERT_ERROR = 495,
            NO_CERT = 496,
            HTTP_TO_HTTPS = 497,
            CLIENT_CLOSED_TO_REQUEST = 499,
            INTERNAL_SERVER_ERROR = 500,
            NOT_IMPLEMENTED = 501,
            BAD_GATEWAY = 502,
            SERVICE_UNAVAILABLE = 503,
            GATEWAY_TIMEOUT = 504,
            HTTP_VERSION_NOT_SUPPORTED = 505,
            VARIANT_ALSO_NEGOTIATES = 506,
            INSUFFICIENT_STORAGE = 507,
            LOOP_DETECTED = 508,
            BANDWIDTH_LIMIT_EXCEEDED = 509,
            NOT_EXTENDED = 510,
            NETWORK_AUTHENTICATION_REQUIRED = 511,
            NETWORK_READ_TIMEOUT = 598,
            NETWORK_CONNECT_TIMEOUT = 599
        };

        /**
         * Overload ostream operator<< for HttpResponseCode enum class for a prettier output such as "200"
         */
        AWS_CORE_API Aws::OStream& operator<< (Aws::OStream& oStream, HttpResponseCode code);

        inline bool IsRetryableHttpResponseCode(HttpResponseCode responseCode)
        {
            switch (responseCode)
            {
                case HttpResponseCode::INTERNAL_SERVER_ERROR:
                case HttpResponseCode::SERVICE_UNAVAILABLE:
                case HttpResponseCode::BAD_GATEWAY:
                case HttpResponseCode::TOO_MANY_REQUESTS:
                case HttpResponseCode::BANDWIDTH_LIMIT_EXCEEDED:
                case HttpResponseCode::REQUEST_TIMEOUT:
                case HttpResponseCode::AUTHENTICATION_TIMEOUT:
                case HttpResponseCode::LOGIN_TIMEOUT:
                case HttpResponseCode::GATEWAY_TIMEOUT:
                case HttpResponseCode::NETWORK_READ_TIMEOUT:
                case HttpResponseCode::NETWORK_CONNECT_TIMEOUT:
                    return true;
                case HttpResponseCode::REQUEST_NOT_MADE:
                case HttpResponseCode::CONTINUE:
                case HttpResponseCode::SWITCHING_PROTOCOLS:
                case HttpResponseCode::PROCESSING:
                case HttpResponseCode::OK:
                case HttpResponseCode::CREATED:
                case HttpResponseCode::ACCEPTED:
                case HttpResponseCode::NON_AUTHORITATIVE_INFORMATION:
                case HttpResponseCode::NO_CONTENT:
                case HttpResponseCode::RESET_CONTENT:
                case HttpResponseCode::PARTIAL_CONTENT:
                case HttpResponseCode::MULTI_STATUS:
                case HttpResponseCode::ALREADY_REPORTED:
                case HttpResponseCode::IM_USED:
                case HttpResponseCode::MULTIPLE_CHOICES:
                case HttpResponseCode::MOVED_PERMANENTLY:
                case HttpResponseCode::FOUND:
                case HttpResponseCode::SEE_OTHER:
                case HttpResponseCode::NOT_MODIFIED:
                case HttpResponseCode::USE_PROXY:
                case HttpResponseCode::SWITCH_PROXY:
                case HttpResponseCode::TEMPORARY_REDIRECT:
                case HttpResponseCode::PERMANENT_REDIRECT:
                case HttpResponseCode::BAD_REQUEST:
                case HttpResponseCode::UNAUTHORIZED:
                case HttpResponseCode::PAYMENT_REQUIRED:
                case HttpResponseCode::FORBIDDEN:
                case HttpResponseCode::NOT_FOUND:
                case HttpResponseCode::METHOD_NOT_ALLOWED:
                case HttpResponseCode::NOT_ACCEPTABLE:
                case HttpResponseCode::PROXY_AUTHENTICATION_REQUIRED:
                case HttpResponseCode::CONFLICT:
                case HttpResponseCode::GONE:
                case HttpResponseCode::LENGTH_REQUIRED:
                case HttpResponseCode::PRECONDITION_FAILED:
                case HttpResponseCode::REQUEST_ENTITY_TOO_LARGE:
                case HttpResponseCode::REQUEST_URI_TOO_LONG:
                case HttpResponseCode::UNSUPPORTED_MEDIA_TYPE:
                case HttpResponseCode::REQUESTED_RANGE_NOT_SATISFIABLE:
                case HttpResponseCode::EXPECTATION_FAILED:
                case HttpResponseCode::IM_A_TEAPOT:
                case HttpResponseCode::METHOD_FAILURE:
                case HttpResponseCode::UNPROC_ENTITY:
                case HttpResponseCode::LOCKED:
                case HttpResponseCode::FAILED_DEPENDENCY:
                case HttpResponseCode::UPGRADE_REQUIRED:
                case HttpResponseCode::PRECONDITION_REQUIRED:
                case HttpResponseCode::REQUEST_HEADER_FIELDS_TOO_LARGE:
                case HttpResponseCode::NO_RESPONSE:
                case HttpResponseCode::RETRY_WITH:
                case HttpResponseCode::BLOCKED:
                case HttpResponseCode::REDIRECT:
                case HttpResponseCode::REQUEST_HEADER_TOO_LARGE:
                case HttpResponseCode::CERT_ERROR:
                case HttpResponseCode::NO_CERT:
                case HttpResponseCode::HTTP_TO_HTTPS:
                case HttpResponseCode::CLIENT_CLOSED_TO_REQUEST:
                case HttpResponseCode::NOT_IMPLEMENTED:
                case HttpResponseCode::HTTP_VERSION_NOT_SUPPORTED:
                case HttpResponseCode::VARIANT_ALSO_NEGOTIATES:
                case HttpResponseCode::INSUFFICIENT_STORAGE:
                case HttpResponseCode::LOOP_DETECTED:
                case HttpResponseCode::NOT_EXTENDED:
                case HttpResponseCode::NETWORK_AUTHENTICATION_REQUIRED:
                default:
                    return false;
            }
        }

        /**
         * Abstract class for representing an Http Response.
         */
        class AWS_CORE_API HttpResponse
        {
        public:
            /**
             * Initializes an http response with the originalRequest and the response code.
             */
            HttpResponse(const std::shared_ptr<const HttpRequest>& originatingRequest) :
                m_httpRequest(originatingRequest),
                m_responseCode(HttpResponseCode::REQUEST_NOT_MADE),
                m_hasClientError(false),
                m_clientErrorType(Aws::Client::CoreErrors::OK)
            {}

            virtual ~HttpResponse() = default;

            /**
             * Gets the request that originated this response
             */
            virtual inline const HttpRequest& GetOriginatingRequest() const { return *m_httpRequest; }

            /**
             * Sets the request that originated this response
             */
            virtual inline void SetOriginatingRequest(const std::shared_ptr<const HttpRequest>& httpRequest) { m_httpRequest = httpRequest; }

            /**
             * Get the headers from this response
             */
            virtual HeaderValueCollection GetHeaders() const = 0;
            /**
             * Returns true if the response contains a header by headerName
             */
            virtual bool HasHeader(const char* headerName) const = 0;
            /**
             * Returns the value for a header at headerName if it exists.
             */
            virtual const Aws::String& GetHeader(const Aws::String& headerName) const = 0;
            /**
             * Gets response code for this http response.
             */
            virtual inline HttpResponseCode GetResponseCode() const { return m_responseCode; }
            /**
             * Sets the response code for this http response.
             */
            virtual inline void SetResponseCode(HttpResponseCode httpResponseCode) { m_responseCode = httpResponseCode; }
            /**
             * Gets the content-type of the response body
             */
            virtual const Aws::String& GetContentType() const { return GetHeader(Http::CONTENT_TYPE_HEADER); }
            /**
             * Gets the response body of the response.
             */
            virtual Aws::IOStream& GetResponseBody() const = 0;
            /**
             * Gives full control of the memory of the ResponseBody over to the caller. At this point, it is the caller's
             * responsibility to clean up this object.
             */
            virtual Utils::Stream::ResponseStream&& SwapResponseStreamOwnership() = 0;
            /**
             * Adds a header to the http response object.
             */
            virtual void AddHeader(const Aws::String&, const Aws::String&) = 0;
            /**
              * Add a header to the http response object, and move the value.
              * The name can't be moved as it is converted to lower-case.
              *
              * It isn't pure virtual for backwards compatiblity reasons, but the StandardHttpResponse used by default in the SDK
              * implements the move.
              */
            virtual void AddHeader(const Aws::String& headerName, Aws::String&& headerValue) { AddHeader(headerName, headerValue); }
            /**
             * Sets the content type header on the http response object.
             */
            virtual void SetContentType(const Aws::String& contentType) { AddHeader("content-type", contentType); }

            inline bool HasClientError() const { return m_hasClientError; }
            inline void SetClientErrorType(Aws::Client::CoreErrors errorType) {m_hasClientError = true; m_clientErrorType = errorType;}
            inline Aws::Client::CoreErrors GetClientErrorType() { return m_clientErrorType; }

            inline const Aws::String &GetClientErrorMessage() const { return m_clientErrorMessage; }
            inline void SetClientErrorMessage(const Aws::String &error) { m_clientErrorMessage = error; }

        private:
            HttpResponse(const HttpResponse&);
            HttpResponse& operator = (const HttpResponse&);

            std::shared_ptr<const HttpRequest> m_httpRequest;
            HttpResponseCode m_responseCode;
            // Error generated by http client, SDK or users, indicating non service error during http request
            bool m_hasClientError;
            Aws::Client::CoreErrors m_clientErrorType;
            Aws::String m_clientErrorMessage;
        };

    } // namespace Http
} // namespace Aws


