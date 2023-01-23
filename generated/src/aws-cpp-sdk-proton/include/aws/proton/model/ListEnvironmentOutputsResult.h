/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/proton/model/Output.h>
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
namespace Proton
{
namespace Model
{
  class ListEnvironmentOutputsResult
  {
  public:
    AWS_PROTON_API ListEnvironmentOutputsResult();
    AWS_PROTON_API ListEnvironmentOutputsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API ListEnvironmentOutputsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A token that indicates the location of the next environment output in the
     * array of environment outputs, after the current requested list of environment
     * outputs.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates the location of the next environment output in the
     * array of environment outputs, after the current requested list of environment
     * outputs.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates the location of the next environment output in the
     * array of environment outputs, after the current requested list of environment
     * outputs.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates the location of the next environment output in the
     * array of environment outputs, after the current requested list of environment
     * outputs.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates the location of the next environment output in the
     * array of environment outputs, after the current requested list of environment
     * outputs.</p>
     */
    inline ListEnvironmentOutputsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates the location of the next environment output in the
     * array of environment outputs, after the current requested list of environment
     * outputs.</p>
     */
    inline ListEnvironmentOutputsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates the location of the next environment output in the
     * array of environment outputs, after the current requested list of environment
     * outputs.</p>
     */
    inline ListEnvironmentOutputsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array of environment outputs with detail data.</p>
     */
    inline const Aws::Vector<Output>& GetOutputs() const{ return m_outputs; }

    /**
     * <p>An array of environment outputs with detail data.</p>
     */
    inline void SetOutputs(const Aws::Vector<Output>& value) { m_outputs = value; }

    /**
     * <p>An array of environment outputs with detail data.</p>
     */
    inline void SetOutputs(Aws::Vector<Output>&& value) { m_outputs = std::move(value); }

    /**
     * <p>An array of environment outputs with detail data.</p>
     */
    inline ListEnvironmentOutputsResult& WithOutputs(const Aws::Vector<Output>& value) { SetOutputs(value); return *this;}

    /**
     * <p>An array of environment outputs with detail data.</p>
     */
    inline ListEnvironmentOutputsResult& WithOutputs(Aws::Vector<Output>&& value) { SetOutputs(std::move(value)); return *this;}

    /**
     * <p>An array of environment outputs with detail data.</p>
     */
    inline ListEnvironmentOutputsResult& AddOutputs(const Output& value) { m_outputs.push_back(value); return *this; }

    /**
     * <p>An array of environment outputs with detail data.</p>
     */
    inline ListEnvironmentOutputsResult& AddOutputs(Output&& value) { m_outputs.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<Output> m_outputs;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
