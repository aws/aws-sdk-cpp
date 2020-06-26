/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/internal/AWSHttpResourceClient.h>

class MockEC2MetadataClient : public Aws::Internal::EC2MetadataClient
{
public:
    MockEC2MetadataClient()
        :EC2MetadataClient()
    { }

    inline Aws::String GetDefaultCredentialsSecurely() const override
    {
        return m_mockedValue;
    }

    inline void SetMockedCredentialsValue(const Aws::String& mockValue)
    {
        m_mockedValue = mockValue;
    }

    inline Aws::String GetCurrentRegion() const override
    {
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


class MockECSCredentialsClient : public Aws::Internal::ECSCredentialsClient
{
public:
    MockECSCredentialsClient(const char* resourcePath)
        :ECSCredentialsClient(resourcePath)
    { }

    inline Aws::String GetECSCredentials() const override
    {
        return m_mockedValue;
    }

    inline void SetMockedCredentialsValue(const Aws::String& mockValue)
    {
        m_mockedValue = mockValue;
    }

private:
    Aws::String m_mockedValue;
};
