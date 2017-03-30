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

#pragma once

#include <aws/core/internal/ECSCredentialsClient.h>

class MockECSCredentialsClient : public Aws::Internal::ECSCredentialsClient
{
public:

    inline Aws::String GetECSCredentials(const char* relativeURI) const override
    {
        Aws::String dummy(relativeURI);
        dummy.clear();
        return m_mockedValue + dummy;
    }

    inline void SetMockedCredentialsValue(const Aws::String& mockValue)
    {
        m_mockedValue = mockValue;
    }

private:
    Aws::String m_mockedValue;
};
