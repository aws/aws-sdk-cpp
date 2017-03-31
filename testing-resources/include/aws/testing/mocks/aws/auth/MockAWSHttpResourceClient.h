/*
  * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
  * 
  * Licensed under the Apache License, Version 2.0 (the "License").
  * You may not use this file except in compliance with the License.
  * A copy of the License is located at
  * 
  *  http://aws.amazon.com/apache2.0
  * 
  * or in the "license" file accompanying this file. This file is distributed
  * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
  * express or implied. See the License for the specific language governing
  * permissions and limitations under the License.
  */

#include <aws/core/internal/AWSHttpResourceClient.h>

class MockAWSHttpResourceClient : public Aws::Internal::AWSHttpResourceClient
{
public:

    inline Aws::String GetECSCredentials(const char* endpoint, const char* relativeURI) const override
    {
        Aws::String uri(endpoint);
        uri += Aws::String(relativeURI);
        return m_mockedValue;
    }

    inline Aws::String GetEC2DefaultCredentials(const char* endpoint) const override
    {
        Aws::String dummy(endpoint);
        return m_mockedValue;
    }

    inline void SetMockedCredentialsValue(const Aws::String& mockValue)
    {
        m_mockedValue = mockValue;
    }

    inline Aws::String GetEC2CurrentRegion(const char* endpoint) const override
    {
        Aws::String dummy(endpoint);
        return m_region;
    }

    inline void SetCurrentRegionValue(const Aws::String& mockValue)
    {
        m_region = mockValue;
    }

private:
    Aws::String m_mockedValue;
    Aws::String m_region;
};
