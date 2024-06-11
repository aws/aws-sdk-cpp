﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/NotebookInstanceLifecycleHook.h>
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
namespace SageMaker
{
namespace Model
{
  class DescribeNotebookInstanceLifecycleConfigResult
  {
  public:
    AWS_SAGEMAKER_API DescribeNotebookInstanceLifecycleConfigResult();
    AWS_SAGEMAKER_API DescribeNotebookInstanceLifecycleConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeNotebookInstanceLifecycleConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configuration.</p>
     */
    inline const Aws::String& GetNotebookInstanceLifecycleConfigArn() const{ return m_notebookInstanceLifecycleConfigArn; }
    inline void SetNotebookInstanceLifecycleConfigArn(const Aws::String& value) { m_notebookInstanceLifecycleConfigArn = value; }
    inline void SetNotebookInstanceLifecycleConfigArn(Aws::String&& value) { m_notebookInstanceLifecycleConfigArn = std::move(value); }
    inline void SetNotebookInstanceLifecycleConfigArn(const char* value) { m_notebookInstanceLifecycleConfigArn.assign(value); }
    inline DescribeNotebookInstanceLifecycleConfigResult& WithNotebookInstanceLifecycleConfigArn(const Aws::String& value) { SetNotebookInstanceLifecycleConfigArn(value); return *this;}
    inline DescribeNotebookInstanceLifecycleConfigResult& WithNotebookInstanceLifecycleConfigArn(Aws::String&& value) { SetNotebookInstanceLifecycleConfigArn(std::move(value)); return *this;}
    inline DescribeNotebookInstanceLifecycleConfigResult& WithNotebookInstanceLifecycleConfigArn(const char* value) { SetNotebookInstanceLifecycleConfigArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the lifecycle configuration.</p>
     */
    inline const Aws::String& GetNotebookInstanceLifecycleConfigName() const{ return m_notebookInstanceLifecycleConfigName; }
    inline void SetNotebookInstanceLifecycleConfigName(const Aws::String& value) { m_notebookInstanceLifecycleConfigName = value; }
    inline void SetNotebookInstanceLifecycleConfigName(Aws::String&& value) { m_notebookInstanceLifecycleConfigName = std::move(value); }
    inline void SetNotebookInstanceLifecycleConfigName(const char* value) { m_notebookInstanceLifecycleConfigName.assign(value); }
    inline DescribeNotebookInstanceLifecycleConfigResult& WithNotebookInstanceLifecycleConfigName(const Aws::String& value) { SetNotebookInstanceLifecycleConfigName(value); return *this;}
    inline DescribeNotebookInstanceLifecycleConfigResult& WithNotebookInstanceLifecycleConfigName(Aws::String&& value) { SetNotebookInstanceLifecycleConfigName(std::move(value)); return *this;}
    inline DescribeNotebookInstanceLifecycleConfigResult& WithNotebookInstanceLifecycleConfigName(const char* value) { SetNotebookInstanceLifecycleConfigName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The shell script that runs only once, when you create a notebook
     * instance.</p>
     */
    inline const Aws::Vector<NotebookInstanceLifecycleHook>& GetOnCreate() const{ return m_onCreate; }
    inline void SetOnCreate(const Aws::Vector<NotebookInstanceLifecycleHook>& value) { m_onCreate = value; }
    inline void SetOnCreate(Aws::Vector<NotebookInstanceLifecycleHook>&& value) { m_onCreate = std::move(value); }
    inline DescribeNotebookInstanceLifecycleConfigResult& WithOnCreate(const Aws::Vector<NotebookInstanceLifecycleHook>& value) { SetOnCreate(value); return *this;}
    inline DescribeNotebookInstanceLifecycleConfigResult& WithOnCreate(Aws::Vector<NotebookInstanceLifecycleHook>&& value) { SetOnCreate(std::move(value)); return *this;}
    inline DescribeNotebookInstanceLifecycleConfigResult& AddOnCreate(const NotebookInstanceLifecycleHook& value) { m_onCreate.push_back(value); return *this; }
    inline DescribeNotebookInstanceLifecycleConfigResult& AddOnCreate(NotebookInstanceLifecycleHook&& value) { m_onCreate.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The shell script that runs every time you start a notebook instance,
     * including when you create the notebook instance.</p>
     */
    inline const Aws::Vector<NotebookInstanceLifecycleHook>& GetOnStart() const{ return m_onStart; }
    inline void SetOnStart(const Aws::Vector<NotebookInstanceLifecycleHook>& value) { m_onStart = value; }
    inline void SetOnStart(Aws::Vector<NotebookInstanceLifecycleHook>&& value) { m_onStart = std::move(value); }
    inline DescribeNotebookInstanceLifecycleConfigResult& WithOnStart(const Aws::Vector<NotebookInstanceLifecycleHook>& value) { SetOnStart(value); return *this;}
    inline DescribeNotebookInstanceLifecycleConfigResult& WithOnStart(Aws::Vector<NotebookInstanceLifecycleHook>&& value) { SetOnStart(std::move(value)); return *this;}
    inline DescribeNotebookInstanceLifecycleConfigResult& AddOnStart(const NotebookInstanceLifecycleHook& value) { m_onStart.push_back(value); return *this; }
    inline DescribeNotebookInstanceLifecycleConfigResult& AddOnStart(NotebookInstanceLifecycleHook&& value) { m_onStart.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A timestamp that tells when the lifecycle configuration was last
     * modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline DescribeNotebookInstanceLifecycleConfigResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline DescribeNotebookInstanceLifecycleConfigResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that tells when the lifecycle configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeNotebookInstanceLifecycleConfigResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeNotebookInstanceLifecycleConfigResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeNotebookInstanceLifecycleConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeNotebookInstanceLifecycleConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeNotebookInstanceLifecycleConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_notebookInstanceLifecycleConfigArn;

    Aws::String m_notebookInstanceLifecycleConfigName;

    Aws::Vector<NotebookInstanceLifecycleHook> m_onCreate;

    Aws::Vector<NotebookInstanceLifecycleHook> m_onStart;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
