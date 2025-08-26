/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
* SPDX-License-Identifier: Apache-2.0.
*/

#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/Outcome.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/core/client/AWSClient.h>

namespace Aws
{
    namespace Utils
    {
        namespace Cbor {
            class AWS_CORE_API CborValue
            {
            public:
              /**
               * Constructs empty CborValue.
               */
              CborValue();

              /**
               * Constructs a CborValue by parsing the httpResponseOutCome's body.
               */
              CborValue(Aws::IStream& istream);

              /**
               * Copy constructor.
               */
              CborValue(const CborValue& other);

              /**
               * Copy assignment operator.
               */
              CborValue& operator=(const CborValue& other);

              /**
               * Moves the ownership of the CborValue.
               * No copying is performed.
               */
              CborValue(CborValue&& value) noexcept;

              /**
               * Move assignment operator.
               */
              CborValue& operator=(CborValue&& other) noexcept;

              ~CborValue();

              std::shared_ptr<Aws::Crt::Cbor::CborDecoder> GetDecoder() const { return m_decoder; };

              inline bool WasParseSuccessful() const { return m_decoder != nullptr; };

            private:
              mutable std::shared_ptr<Crt::Cbor::CborDecoder> m_decoder;
              Aws::String m_body;
            };
        } //Cbor
    } // Utils
} // Aws
