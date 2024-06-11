/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/xray/model/FaultRootCauseEntity.h>
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
namespace XRay
{
namespace Model
{

  /**
   * <p>A collection of fields identifying the services in a trace summary
   * fault.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/FaultRootCauseService">AWS
   * API Reference</a></p>
   */
  class FaultRootCauseService
  {
  public:
    AWS_XRAY_API FaultRootCauseService();
    AWS_XRAY_API FaultRootCauseService(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API FaultRootCauseService& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The service name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline FaultRootCauseService& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline FaultRootCauseService& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline FaultRootCauseService& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of associated service names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNames() const{ return m_names; }
    inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }
    inline void SetNames(const Aws::Vector<Aws::String>& value) { m_namesHasBeenSet = true; m_names = value; }
    inline void SetNames(Aws::Vector<Aws::String>&& value) { m_namesHasBeenSet = true; m_names = std::move(value); }
    inline FaultRootCauseService& WithNames(const Aws::Vector<Aws::String>& value) { SetNames(value); return *this;}
    inline FaultRootCauseService& WithNames(Aws::Vector<Aws::String>&& value) { SetNames(std::move(value)); return *this;}
    inline FaultRootCauseService& AddNames(const Aws::String& value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }
    inline FaultRootCauseService& AddNames(Aws::String&& value) { m_namesHasBeenSet = true; m_names.push_back(std::move(value)); return *this; }
    inline FaultRootCauseService& AddNames(const char* value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type associated to the service.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline FaultRootCauseService& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline FaultRootCauseService& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline FaultRootCauseService& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID associated to the service.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline FaultRootCauseService& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline FaultRootCauseService& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline FaultRootCauseService& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path of root cause entities found on the service. </p>
     */
    inline const Aws::Vector<FaultRootCauseEntity>& GetEntityPath() const{ return m_entityPath; }
    inline bool EntityPathHasBeenSet() const { return m_entityPathHasBeenSet; }
    inline void SetEntityPath(const Aws::Vector<FaultRootCauseEntity>& value) { m_entityPathHasBeenSet = true; m_entityPath = value; }
    inline void SetEntityPath(Aws::Vector<FaultRootCauseEntity>&& value) { m_entityPathHasBeenSet = true; m_entityPath = std::move(value); }
    inline FaultRootCauseService& WithEntityPath(const Aws::Vector<FaultRootCauseEntity>& value) { SetEntityPath(value); return *this;}
    inline FaultRootCauseService& WithEntityPath(Aws::Vector<FaultRootCauseEntity>&& value) { SetEntityPath(std::move(value)); return *this;}
    inline FaultRootCauseService& AddEntityPath(const FaultRootCauseEntity& value) { m_entityPathHasBeenSet = true; m_entityPath.push_back(value); return *this; }
    inline FaultRootCauseService& AddEntityPath(FaultRootCauseEntity&& value) { m_entityPathHasBeenSet = true; m_entityPath.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A Boolean value indicating if the service is inferred from the trace.</p>
     */
    inline bool GetInferred() const{ return m_inferred; }
    inline bool InferredHasBeenSet() const { return m_inferredHasBeenSet; }
    inline void SetInferred(bool value) { m_inferredHasBeenSet = true; m_inferred = value; }
    inline FaultRootCauseService& WithInferred(bool value) { SetInferred(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_names;
    bool m_namesHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Vector<FaultRootCauseEntity> m_entityPath;
    bool m_entityPathHasBeenSet = false;

    bool m_inferred;
    bool m_inferredHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
